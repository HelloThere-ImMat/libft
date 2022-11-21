/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:47:30 by mdorr             #+#    #+#             */
/*   Updated: 2022/11/10 11:10:35 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start_new;
	t_list	*tmp_new;
	t_list	*tmp_old;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	start_new = ft_lstnew((*f)(lst->content));
	if (start_new == NULL)
		return (NULL);
	tmp_new = start_new;
	tmp_old = lst;
	while (tmp_old->next != NULL)
	{
		tmp_new->next = ft_lstnew((*f)(tmp_old->next->content));
		tmp_new = tmp_new->next;
		tmp_old = tmp_old->next;
	}
	return (start_new);
}
