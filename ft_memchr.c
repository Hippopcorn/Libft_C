/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:40:33 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 11:55:01 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*s_cast;
	unsigned int	i;

	s_cast = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_cast[i] == c)
		{
			return (&s_cast[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
int main()
{
	char *str1 = "chaton";
	char *str2 = "chaton";

	char *p1 = ft_memchr(str1, 'o', 0);
	
    printf("Mon resultat : %s\n", p1);
	
	char *p2 = memchr(str2, 'o', 0);
    printf("Resultat fonction native : %s\n", p2);

    return (0);
}*/