/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:42:50 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 13:45:48 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		else
			i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*

#include <stdio.h>
#include <string.h>

int main()
{
	char *s = "coucqou";
	char c;
	char *s2;
	char *sd;

	sd = NULL;

	//s2 = strchr(sd, c);

	c = 'q';
	s = ft_strchr(sd, c);
	printf("%p", s);
}
*/