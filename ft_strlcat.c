/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:35:48 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 11:56:05 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/string.h>
#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	char			*src_cast;
	unsigned int	i;

	src_cast = (char *)src;
	len_src = ft_strlen(src_cast);
	len_dest = ft_strlen(dst);
	i = 0;
	if (size <= len_dest)
		return (len_src + size);
	if (size == 0)
		return (len_src);
	while (src_cast[i] != '\0' && i < (size - len_dest - 1))
	{
		dst[len_dest + i] = src_cast[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*
int	main()
{
	char	my_src[] = "lechaton";
	char	my_dest[5] = "ioi";
	char    my_src2[] = "lechaton";
        char    my_dest2[5] = "ioi";

	printf("my fonction result : %d\n",ft_strlcat(my_dest, my_src, 15));
	printf("result dest : %s\n", my_dest);
	printf("official fonction result : %zu\n",strlcat(my_dest2, my_src2, 15));
	printf("result dest2 : %s\n", my_dest2);
	return (0);
}*/