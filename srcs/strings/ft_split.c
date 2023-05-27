/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:08:18 by mdorr             #+#    #+#             */
/*   Updated: 2022/12/03 13:50:16 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_all(char ***tab_ptr, int rows)
{
	int	i;

	i = 0;
	while (i <= rows)
	{
		free(*tab_ptr[i]);
		i++;
	}
	free(*tab_ptr);
}

int	str_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

int	word_len(char *s, int *i, char c)
{
	int	count;

	count = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		count++;
	}
	return (count);
}

char	*get_word(char *s, int len, int *i, char c)
{
	char	*word;
	int		j;

	j = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (s[*i] && s[*i] == c)
		(*i)++;
	while (s[*i] && s[*i] != c)
	{
		word[j] = s[*i];
		(*i)++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	int		len_word;
	char	**tab;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	tab = malloc(sizeof(char *) * (str_count(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (i < str_count(s, c))
	{
		len_word = word_len(s, &j, c);
		j = j - len_word;
		tab[i++] = get_word(s, len_word, &j, c);
		if (tab[i - 1] == NULL)
		{
			free_all(&tab, i - 1);
			return (NULL);
		}
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
