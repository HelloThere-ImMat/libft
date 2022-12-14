/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:21:27 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 15:07:34 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	length = 0;
	i = 0;
	while (dest[length] != '\0' && length < size)
		length++;
	while (src[i] != '\0' && size > 0 && length + i < size - 1)
	{
		dest[length + i] = src[i];
		i++;
	}
	if (length < size)
		dest[length + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (length + i);
}

/*
#include <string.h>
#include <stdio.h>

int main (void)
{
	char *s;
	char *s2;
	int	res;

	s = NULL;
	s2 = "coucou";
	res = strlcat(s, s2, 2);
	printf("%d", res);
}*/