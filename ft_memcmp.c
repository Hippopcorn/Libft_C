/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:55:35 by evarache          #+#    #+#             */
/*   Updated: 2025/11/19 11:17:25 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memcmp compares byte string s1 against byte string s2. 
// Both strings are assumed to be n bytes long.

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
	while (i < n)
	{
		if (s1_cast[i] != s2_cast[i])
			return (s1_cast[i] - s2_cast[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// int	main()
// {
// 	char	string1[] = "lapin";
// 	char	string2[] = "chaton";
// 	printf("result = %d\n",ft_memcmp(string1, string2, 50));
// 	printf("true fonction = %d\n",memcmp(string1, string2, 50));
// 	char *s11 = "\xff\xaa\xde\xffMACOSX\xff";
// 	char *s22 = "\xff\xaa\xde\x02";
// 	size_t size1 = 8;
// 	printf("%d\n", ft_memcmp(s11, s22, size1));
// 	printf("%d\n", memcmp(s11, s22, size1));
// 	char *s1 = "\xff\xaa\xde\200";
// 	char *s2 = "\xff\xaa\xde\0";
// 	size_t size = 8;
// 	int i1 = memcmp(s1, s2, size);
// 	int i2 = ft_memcmp(s1, s2, size);
// 	printf("%d\n", i1);
// 	printf("%d\n", i2);

// printf("%d\n", (ft_memcmp("t\200", "t\0", 2)));
// printf("%d\n",(ft_memcmp("testss", "test", 5)));
// }