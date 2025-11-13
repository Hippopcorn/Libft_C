/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:55:35 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 11:55:11 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*s1_cast;
	char			*s2_cast;
	unsigned char	i;

	i = 0;
	s1_cast = (char *)s1;
	s2_cast = (char *)s2;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (s1_cast[i] != s2_cast[i])
			return (s1_cast[i] - s2_cast[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	string1[] = "lapin";
	char	string2[] = "chaton";
	printf("result = %d\n",ft_memcmp(string1, string2, 50));
	printf("true fonction = %d\n",memcmp(string1, string2, 50));
	return (0);
}*/