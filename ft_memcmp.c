/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:39:01 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/17 14:55:54 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(p1 + i) == *(unsigned char *)(p2 + i))
			i++;
		else
			return (*(unsigned char *)(p1 + i) - *(unsigned char *)
				(p2 + i));
	}
	return (0);
}

/*

int main()
{
    char *str1;
    char *str2;

    str1 = "coucou";
    str2 = "coucov";

    printf("%d\n", ft_memcmp(str1, str2, 6));
}

*/
