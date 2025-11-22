/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:12:40 by evarache          #+#    #+#             */
/*   Updated: 2025/11/22 09:53:35 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strrchr locates the last occurence of c in s.

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (ft_strlen(s) - 1);
	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (i >= 0)
	{
		if ((unsigned char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (0);
}
