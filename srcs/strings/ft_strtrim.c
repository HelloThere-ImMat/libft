/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:38:38 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/22 12:20:13 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*rtnemptystr(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	if (str == NULL)
		return (NULL);
	*str = 0;
	return (str);
}

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
	int		i;
	int		start;
	int		len;

	if (!s1 || !set)
		return (rtnemptystr());
	i = 0;
	while (charisincharset(s1[i], set) == 1 && s1[i])
		i++;
	if (s1[i] == 0)
		return (rtnemptystr());
	start = i;
	i = ft_strlen(s1) - 1;
	while (charisincharset(s1[i], set) == 1)
		i--;
	len = i - start + 1;
	return (ft_substr(s1, start, len));
}

/*

#include <stdio.h>

int main()
{
    char *str;
    char *set;
    char *dest;

    str = "@@@Bo COMMENT tt@##@";
    set = "@#";
    dest = ft_strtrim(str, set);
    printf("%s\n", dest);
    return (0);
}

*/
