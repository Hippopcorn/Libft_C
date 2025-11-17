/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:12:40 by evarache          #+#    #+#             */
/*   Updated: 2025/11/17 15:36:38 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strrchr locates the last occurence of c in s.

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (ft_strlen(s) - 1);
	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (i >= 0)
	{
		if ((unsigned char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (0);
}

//#include <string.h>
// int main()
// {
//     // printf("%d\n", ft_strrchr("\0", '\0'));
//     // printf("%d\n", strrchr("\0", '\0'));
// 	// char *src = "ane";

// 	// printf("%p\n", ft_strrchr(src, '\0'));
// 	// //printf("%c\n", ft_strrchr(src, '\0'));
//     // printf("%p\n", strrchr(src, '\0'));
//     // //printf("%c\n", strrchr(src, '\0'));

// 	char *src1 = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//     printf("%p\n", strrchr(src1, '\0'));
//     printf("%p\n", ft_strrchr(src1, '\0'));

//     return (0);
// }