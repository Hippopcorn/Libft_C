/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:19:00 by elsa              #+#    #+#             */
/*   Updated: 2025/11/22 09:53:46 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strtrim allocates memory (using malloc(3)) and returns a copy of ’s1’ 
// with characters from ’set’ removed from the beginning and the end.

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}
