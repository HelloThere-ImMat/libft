/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:42:02 by mdorr             #+#    #+#             */
/*   Updated: 2023/05/29 11:45:15 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	add_to_lst(t_words **stash, char *buf, int counter)
{
	t_words	*new_node;
	t_words	*last_node;
	int		i;

	new_node = malloc(sizeof(t_words));
	if (new_node == NULL)
		return ;
	new_node->content = malloc(sizeof(char) * counter + 1);
	if (new_node->content == NULL)
		return ;
	new_node->next = NULL;
	i = 0;
	while (buf[i] && i < counter)
	{
		new_node->content[i] = buf[i];
		i++;
	}
	new_node->content[i] = '\0';
	if (*stash == NULL)
	{
		*stash = new_node;
		return ;
	}
	last_node = ft_lstlast_words(*stash);
	last_node->next = new_node;
}

int	found_newline(t_words *stash)
{
	t_words	*current;
	int		i;

	i = 0;
	if (stash == NULL)
		return (0);
	current = ft_lstlast_words(stash);
	while (current->content[i])
	{
		if (current->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	free_stash(t_words *stash)
{
	t_words	*current;
	t_words	*next;

	current = stash;
	while (current)
	{
		free(current->content);
		next = current->next;
		free(current);
		current = next;
	}
}

t_words	*ft_lstlast_words(t_words *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
