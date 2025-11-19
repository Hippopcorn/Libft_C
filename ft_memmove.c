/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:15:25 by evarache          #+#    #+#             */
/*   Updated: 2025/11/19 11:07:40 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memmove copies n bytes from string src to string dst. The two strings 
// may overlap; the copy is always done in a non-destructive manner
// crash with paco even when directly calling memmove of lib

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
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
