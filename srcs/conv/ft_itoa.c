/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:36:12 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 14:17:01 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	power10(int a)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < a)
	{
		res = res * 10;
		i++;
	}
	return (res);
}

int	get_size(int n)
{
	unsigned int	a;
	int				size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		a = -n;
	}
	else
		a = n;
	while (a > 0)
	{
		size++;
		a = a / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	unsigned int	a;
	char			*str;
	int				size;
	int				power;
	int				i;

	i = 0;
	size = get_size(n);
	power = size - 1;
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		power--;
		a = n * -1;
	}
	else
		a = n;
	while (i < size)
		str[i++] = a / power10(power--) % 10 + 48;
	str[i] = 0;
	return (str);
}

/*
int	main()
{
    char *str;
    
    str = ft_itoa(7483648);
    printf("%s\n", str);

    return (0);
}
*/
