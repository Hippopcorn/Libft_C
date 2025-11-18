/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:17:22 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 16:13:33 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memcpy copies n bytes from memory area src to memory 
// area dest. The memory areas must not overlap.  
// Use memmove(3) if the memory areas do overlap.

void	*ft_memcpy( void *dest, const void *src, size_t n)
{
	char			*dest_cast;
	char			*src_cast;
	unsigned char	i;

	i = 0;
	dest_cast = (char *)dest;
	src_cast = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest_cast[i] = src_cast[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
    char *str1;
	char *str2;

	str1 = calloc(20, sizeof(char));
	str2 = calloc(20, sizeof(char));

    ft_memcpy(str1, "chien", 5);
	ft_memcpy(str1 + 5, "lapin", 5);
	printf("Mon résultat : %s\n", str1);

    memcpy(str2, "chien", 6);
	memcpy(str2 + 5, "lapin", 6);

    printf("Résultat : %s\n", str1);
    return 0;
}*/
