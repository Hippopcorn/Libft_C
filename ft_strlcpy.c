/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:20:51 by evarache          #+#    #+#             */
/*   Updated: 2025/11/22 09:52:39 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// same behavior than strncopy but more safely

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
