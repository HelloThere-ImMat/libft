/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:42:08 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 13:33:57 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

/*

int main ()
{

   char *str;
   char *dest;
   int i;

   str = "bonjour";
   i = 0;

   dest = ft_memcpy(dest, str, 7);
   while (dest[i])
   {
      write(1, &dest[i], 1);
      i++;
   }
   write(1, "\n", 1);
}

*/
