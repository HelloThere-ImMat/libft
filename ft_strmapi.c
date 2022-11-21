/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:37:07 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/17 16:28:14 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tab;
	size_t			i;

	i = 0;
	tab = ft_strdup(s);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (tab[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	return (tab);
}

/*

char testfunc(unsigned int b, char ch)
{
		if (ch > 64 && ch < 91)
		return (ch + 32);
	else
		return (ch);
}

#include <stdio.h>

int main()
{
	char *str;
	char *str2;

	str = "couOCOUii";
	str2 = ft_strmapi(str, &testfunc);
	printf("%s\n", str);
	printf("%s\n", str2);
	return (0);
}

*/
