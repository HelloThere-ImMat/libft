/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:38:38 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/21 16:16:42 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charisincharset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		start;
	int		len;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (charisincharset(s1[i], set) == 1 && s1[i])
		i++;
	if (s1[i] == 0)
	{
		dest = (char *)malloc(sizeof(*s1));
		dest[i] = 0;
		return (dest);
	}
	start = i;
	len = 0;
	while (charisincharset(s1[i], set) == 0 && s1[i])
	{
		len++;
		i++;
	}
	return (ft_substr(s1, start, len));
}

/*
#include <stdio.h>

int main()
{
    char *str;
    char *set;
    char *dest;

    str = "@@@@@@@@Bonjour COMMENT va@@@######@";
    set = "@#";
    dest = ft_strtrim(str, set);
    printf("%s\n", dest);
    return (0);
}

*/
