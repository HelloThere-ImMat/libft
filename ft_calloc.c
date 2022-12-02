/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:40:27 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/17 15:58:04 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*tab;

	if (elementSize > 0 && elementCount > SIZE_MAX / elementSize)
		return (NULL);
	tab = (void *)malloc(elementCount * elementSize);
	if (!tab)
		return (NULL);
	ft_bzero(tab, elementCount);
	return (tab);
}

/*

int main()
{
	char *str;
	str = ft_calloc(5, 1);
	printf("%s\n", str);
	return (0);
}

*/
