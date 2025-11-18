/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:54:58 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 16:19:03 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates through the list ’lst’, applies the function ’f’ to each node’s 
// content, and creates a new list resulting of the successive applications
// of the function ’f’. The ’del’ function is used to delete the content 
// of a node if needed.

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	**new_l;
	
// 	if (!lst || !del)
// 		return (NULL);
// 	while (lst)
// 	{
// 		*new_l = calloc(1, sizeof(t_list));
// 		new_l->content = f(lst->content);
// 		new_l->next = lst->next;
// 		del(lst->content);
// 		free(lst->content);
// 		lst = lst->next;	
// 	}
// 	return (new_l);
// }