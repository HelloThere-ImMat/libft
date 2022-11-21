/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:43:38 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 13:56:39 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		else
			i--;
	}
	return (NULL);
}

/*
#include <unistd.h>

int main()
{
	char *str = "coucqou";
	char c;
	char *s;

	c = 'c';
	s = ft_strrchr(str, c);
	write(1, s, 1);
	write(1, "\n", 1);
}
*/
