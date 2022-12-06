/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:42:41 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 15:03:49 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(char *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

/*#include <string.h>
#include <stdio.h>

int main (void)
{
	char *s;
	char *res;

	s = NULL;
	res = memset(s, 'c', 2);
	printf("%p", res);

}*/
