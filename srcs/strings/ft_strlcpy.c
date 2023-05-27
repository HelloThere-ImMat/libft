/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:44:09 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 14:00:48 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0')
		a++;
	if (size == 0)
		return (a);
	a = 0;
	if (size != 0)
	{
		while (a < size - 1 && src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
	}
	dest[a] = '\0';
	a = 0;
	while (src[a] != '\0')
		a++;
	return (a);
}
