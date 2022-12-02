/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:08:18 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/22 12:27:17 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

int	word_len(char *str, int *i, char c)
{
	int	count;

	count = 0;
	while (str[*i] && str[*i] == c)
		(*i)++;
	while (str[*i] && str[*i] != c)
	{
		(*i)++;
		count++;
	}
	return (count);
}

char	*get_word(char *str, int len, int *i, char c)
{
	char	*word;
	int		j;

	j = 0;
	word = malloc(sizeof(char) * (len + 1));
	while (str[*i] && str[*i] == c)
		(*i)++;
	while (str[*i] && str[*i] != c)
	{
		word[j] = str[*i];
		(*i)++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		j;
	int		count_str;
	int		len_word;
	char	**tab;

	i = 0;
	j = 0;
	count_str = str_count(str, c);
	tab = malloc(sizeof(char *) * (count_str + 1));
	if (tab == NULL)
		return (NULL);
	while (i < count_str)
	{
		len_word = word_len(str, &j, c);
		j = j - len_word;
		tab[i] = get_word(str, len_word, &j, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/*

#include <stdio.h>

int	main()
{
	int	i;
	char **tab;

	i = 0;
	tab = ft_split("coucou comment va je suis mat", ' ');
	while (i < 6)
		printf("%s\n", tab[i++]);
	return (0);
}

*/
