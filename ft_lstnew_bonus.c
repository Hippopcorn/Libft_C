/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:51:40 by evarache          #+#    #+#             */
/*   Updated: 2025/11/22 09:27:49 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// put the pointer of content in the t_list.content

t_list	*ft_lstnew(void *content)
{
	t_list	*p_new_node;

	p_new_node = malloc(sizeof(t_list));
	if (!p_new_node)
		return (NULL);
	p_new_node -> content = content;
	p_new_node -> next = NULL;
	return (p_new_node);
}
