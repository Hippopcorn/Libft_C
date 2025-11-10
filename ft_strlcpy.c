/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:20:51 by evarache          #+#    #+#             */
/*   Updated: 2025/11/10 11:20:53 by evarache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *src)
{
	int	length_src;

	length_src = 0;
	while (src[length_src] != '\0')
	{
		length_src++;
	}
	return (length_src);
}*/

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	char			*src_cast;

	i = 0;
	src_cast = (char *)src;
	if (size > 0)
	{
		while ((src_cast[i] != '\0') && (i < (size - 1)))
		{
			dst[i] = src_cast[i];
			i++;
		}
		dst[i] = '\0';
		while (src_cast[i] != '\0')
		{
			i++;
		}
	}
	return (ft_strlen(src_cast));
}
/*
int     main()
{
        char    str_src[] = "Loutre";
        char    str_dest[] = "Panthere";
        char    str_src2[] = "Loutre";
        char    str_dest2[] = "Panthere";

        printf("Ma fonction : taille de src =  %u caracteres\n",
        ft_strlcpy(str_dest, str_src, 3));
		printf ("src : %s, dest : %s\n", str_src, str_dest);
        printf("fonction officielle : taille de src = %zu caracteres\n",
        strlcpy(str_dest2, str_src2, 3));
		printf ("src2 : %s, dest2 : %s\n", str_src2, str_dest2);
        return (0);
}*/