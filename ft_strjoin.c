/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:58:05 by elsa              #+#    #+#             */
/*   Updated: 2025/11/22 09:33:04 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory (using malloc(3)) and returns a new string, 
// which is the result of concatenating ’s1’ and ’s2’.

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	i;
	size_t	i_s2;
	size_t	new_len;

	i = 0;
	i_s2 = 0;
	new_len = ft_strlen(s1) + ft_strlen(s2);
	new_string = ft_calloc(new_len + 1, sizeof(char));
	if (!new_string)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new_string[i] = s1[i];
		i++;
	}
	while (i < new_len)
	{
		new_string[i] = s2[i_s2];
		i++;
		i_s2++;
	}
	new_string[i + 1] = '\0';
	return (new_string);
}
