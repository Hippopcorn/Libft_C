/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:01:42 by evarache          #+#    #+#             */
/*   Updated: 2025/11/22 09:30:47 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strdup returns a pointer to a new string which is a duplicate 
// of the string s

char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*s1_cast;
	int		i;

	i = 0;
	s1_cast = (char *)s1;
	copy = malloc(sizeof(char) * ft_strlen(s1_cast) + 1);
	if (!copy)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
