/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:35:48 by evarache          #+#    #+#             */
/*   Updated: 2025/11/22 09:42:02 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// same behavior than strncat but more safely

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	char			*src_cast;
	size_t			i;

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
