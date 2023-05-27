/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:43:32 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 13:56:57 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big)
		return (NULL);
	if (!little || !little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				j++;
				if (little[j] == '\0')
					return ((char *)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}

/*
#include <unistd.h>

int main()
{
	char *str1 = "bonjour comment va tu ";
	char *str2 = "comment";
	char *res;
	int a;
	int i;

	i = 0;
	a = 7;
	res = ft_strnstr(str1, str2, a);
	while (i < a)
	{
		write(1, &res[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
*/
