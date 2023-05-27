/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:41:56 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 14:02:26 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if ((unsigned char)c == *(unsigned char *)(s + i))
			return ((void *)(s + i));
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
