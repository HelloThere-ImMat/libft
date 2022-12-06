/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:39:01 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 13:33:26 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
			i++;
		else
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)
				(s2 + i));
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
