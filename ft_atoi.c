/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:56:15 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 14:02:00 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	res;
	int	sign;

	a = 0;
	sign = 1;
	res = 0;
	while (nptr[a] != '\0')
	{
		while ((nptr[a] > 8 && nptr[a] < 14) || nptr[a] == 32)
			a++;
		if (nptr[a] == '-' || nptr[a] == '+')
		{
			if (nptr[a] == 45)
				sign = sign * -1;
			a++;
		}
		while (nptr[a] >= 48 && nptr[a] <= 57)
		{
			res = res * 10 + nptr[a] - '0';
			a++;
		}
		return (res * sign);
	}
	return (0);
}
