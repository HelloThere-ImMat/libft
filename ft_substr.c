/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:38:44 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 14:21:45 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	size_t			i;

	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	i = 0;
	if (start >= ft_strlen(s))
	{
		dest = (char *)malloc(sizeof(*s));
		dest[i] = 0;
		return (dest);
	}
	dest = (char *)malloc(sizeof(*s) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*

#include <stdio.h>

int main ()
{
    char *str;
    char *dest;
    int c;
    int d;
    
    c = 4;
    d = 5;
    str = "coucou comment va ?"; 
    dest = ft_substr(str, c, d);

    printf("%s\n", dest);
    return 0;
}

*/
