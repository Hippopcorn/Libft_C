/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:55:35 by evarache          #+#    #+#             */
/*   Updated: 2025/11/16 18:19:10 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

// ft_memcmp compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*s1_cast;
	unsigned char			*s2_cast;
	unsigned char			i;

	i = 0;
	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
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

// int	main()
// {
// 	// char	string1[] = "lapin";
	// char	string2[] = "chaton";
	// printf("result = %d\n",ft_memcmp(string1, string2, 50));
	// printf("true fonction = %d\n",memcmp(string1, string2, 50));
	// return (0);

	// char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	// char *s2 = "\xff\xaa\xde\x02";
	// size_t size = 8;
	// int i1 = ft_memcmp(s1, s2, size);
	// int i2 = memcmp(s1, s2, size);

	// if (i1 == i2)
	// 	exit(printf("test ok"));
	// exit(printf("test pas ok"));
		
	// char *s1 = "\xff\xaa\xde\200";
	// char *s2 = "\xff\xaa\xde\0";
	// size_t size = 8;
	// int i1 = memcmp(s1, s2, size);
	// int i2 = ft_memcmp(s1, s2, size);
	// printf("%d\n", i1);
	// printf("%d\n", i2);
// }