/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:42:08 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 14:02:22 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;

	i = 0;
	if (!destination && !source)
		return (0);
	while (i < size)
	{
		*(char *)(destination + i) = *(char *)(source + i);
		i++;
	}
	return (destination);
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
