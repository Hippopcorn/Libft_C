/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:15:25 by evarache          #+#    #+#             */
/*   Updated: 2025/11/16 18:24:23 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


// ft_memmove copies n bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner
// crash with paco even when directly calling memmove of lib

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cast;
	const unsigned char	*src_cast;
	size_t				i;

	dest_cast = dest;
	src_cast = src;
	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (dest_cast < src_cast)
	{
		while (i < n)
		{
			dest_cast[i] = src_cast[i];
			i++;
		}
	}
	else if (dest_cast > src_cast)
	{
		i = n;
		while (i != 0)
		{
			dest_cast[i - 1] = src_cast[i - 1];
			i--;
		}
	}
	return (dest);
	return (memmove(dest, src, n));
}

// #include <string.h>
// int main(void) {
//     char data1[] = "abcdef";
//     char data2[] = "abcdef";

//     printf("Avant : data1 = %s, data2 = %s\n", data1, data2);

//     // Test sans chevauchement
//     ft_memmove(data1, data1, 2);
//     printf("Après ft_memmove  (chevauchement) : %s\n", data1);

//     memmove(data2, data2, 2);
//     printf("Après memmove std (chevauchement) : %s\n", data2);

// 	int size = 10;
// 	char *dst = electric_alloc(size);
// 	char *data = electric_alloc(size);

// 	__builtin___memset_chk (data, 'A', size, __builtin_object_size (data, 0));
// 	ft_memmove(dst, data, size);
// 	dst = electric_alloc_rev(size);
// 	data = electric_alloc_rev(size);
// 	__builtin___memset_chk (data, 'A', size, __builtin_object_size (data, 0));
// 	ft_memmove(dst, data, size);
// 	exit(TEST_SUCCESS);

//     return 0;
// }
