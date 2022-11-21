/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:41:56 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 13:57:05 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;

	i = 0;
	if (memoryBlock == NULL)
		return (NULL);
	while (i < size)
	{
		if ((unsigned char)searchedChar == *(unsigned char *)(memoryBlock + i))
			return ((void *)(memoryBlock + i));
		else
			i++;
	}
	return (NULL);
}
/*

int main()
{
	char *str = "coucqou";
	char c;
	void *s;

	c = 'q';
	s = ft_memchr(str, c, 7);
	write(1, s, 1);
}

*/
