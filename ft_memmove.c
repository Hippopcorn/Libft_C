/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:15:25 by evarache          #+#    #+#             */
/*   Updated: 2025/11/10 11:15:27 by evarache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cast;
	const unsigned char	*src_cast;
	size_t				i;

	dest_cast = dest;
	src_cast = src;
	i = 0;
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
}
/*
int main(void) {
    char data1[] = "abcdef";
    char data2[] = "abcdef";

    printf("Avant : data1 = %s, data2 = %s\n", data1, data2);

    // Test sans chevauchement
    ft_memmove(data1, data1, 2);
    printf("Après ft_memmove  (chevauchement) : %s\n", data1);

    memmove(data2, data2, 2);
    printf("Après memmove std (chevauchement) : %s\n", data2);

    return 0;
}*/
