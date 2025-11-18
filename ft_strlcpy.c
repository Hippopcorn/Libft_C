/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:20:51 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 16:15:34 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	char			*src_cast;
	int				result;

	i = 0;
	src_cast = (char *)src;
	result = ft_strlen(src_cast);
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
	return (result);
}
/*
#include <bsd/string.h>
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