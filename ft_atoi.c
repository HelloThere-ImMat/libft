/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:56:15 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 13:57:02 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	res;
	int	sign;

	a = 0;
	sign = 1;
	res = 0;
	while (str[a] != '\0')
	{
		while ((str[a] > 8 && str[a] < 14) || str[a] == 32)
			a++;
		if (str[a] == '-' || str[a] == '+')
		{
			if (str[a] == 45)
				sign = sign * -1;
			a++;
		}
		while (str[a] >= 48 && str[a] <= 57)
		{
			res = res * 10 + str[a] - '0';
			a++;
		}
		return (res * sign);
	}
	return (0);
}
