/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:52:21 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/08 14:35:16 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dst[i + j] = s2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

/*
int	main(void)
{
	char	*strs[3];
	char	str1[7] = "coucou";
	char	str2[8] = "comment";
	char	str3[3] = "va";
	char	*final_str;
	int	i;

	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	final_str = ft_strjoin(str1, str2);
	i = 0;
	while (final_str[i])
	{
		write(1, &final_str[i], 1);
		i++;
	}
}
*/
