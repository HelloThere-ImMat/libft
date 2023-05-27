/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:43:38 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 13:58:33 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		else
			i--;
	}
	return (NULL);
}

/*
#include <unistd.h>

int main()
{
	char *s = "coucqou";
	char c;
	char *s;

	c = 'c';
	s = ft_strrchr(s, c);
	write(1, s, 1);
	write(1, "\n", 1);
}
*/
