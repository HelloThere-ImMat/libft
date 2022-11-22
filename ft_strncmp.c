/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:35:18 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/22 11:59:45 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	r;

	r = 0;
	while (s1[r] != '\0' && s2[r] != '\0' && r < n)
	{
		if (s1[r] != s2[r])
		{
			return ((unsigned char)s1[r] - (unsigned char)s2[r]);
		}
		r++;
	}
	if (r < n)
	{
		return ((unsigned char)s1[r] - (unsigned char)s2[r]);
	}
	else
	{
		return (0);
	}
}
