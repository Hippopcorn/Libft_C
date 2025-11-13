/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:12:40 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 11:56:45 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s_cast;

	s_cast = (char *)s;
	i = ft_strlen(s_cast);
	while (i >= 0)
	{
		if (c == s_cast[i])
			return (&s_cast[i]);
		i--;
	}
	return (0);
}

/*
#include <string.h>
int main()
{
    printf("%s\n", ft_strrchr("ochatn", 'o'));
    printf("%s\n", strrchr("ochatnn", 'o'));

    return (0);
}*/