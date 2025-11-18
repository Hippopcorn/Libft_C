/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:54:58 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 16:57:06 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates through the list ’lst’, applies the function ’f’ to each node’s 
// content, and creates a new list resulting of the successive applications
// of the function ’f’. The ’del’ function is used to delete the content 
// of a node if needed.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	current = calloc(1, sizeof(t_list));
	if (!lst || !del || !current)
		return (NULL);
	current->content = f(lst->content);
	new_list = current;
	while (lst->next)
	{
		new_list->next = calloc(1, sizeof(t_list));
		if (!new_list->next)
			return (NULL);
		new_list = new_list->next;
		lst = lst->next;
		new_list->content = f(lst->content);
	}
	new_list->next = NULL;
	return (current);
}
