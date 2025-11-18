/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:27:55 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 16:16:07 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strncmp compare two strings until n

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;
	unsigned int		diff;
	const unsigned char	*us1;
	const unsigned char	*us2;

	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (us1[i] || us2[i]) && us1[i] == us2[i])
	{
		i++;
	}
	diff = us1[i] - us2[i];
	return (diff);
}

// #include <string.h>
// int	main()
// {
// 	// char	*string1 = "chat";
// 	// char	*string2 = "chav";
// 	printf("result = %d\n",ft_strncmp("abcdef", "abcdefghijklmnop", 6));
// 	printf("true fonction = %d\n",strncmp("abcdef", "abcdefghijklmnop", 6));
// 	// printf("\n");
// 	// //printf("result = %d\n",ft_strncmp("", "chat", 10));
// 	// printf("true fonction = %d\n",strncmp("chat", "chav", 4));
// 	// // printf("\n");
// 	// // printf("result = %d\n",ft_strncmp("chat", "", 10));
// 	// printf("true fonction = %d\n",strncmp("chat", "", 10));
// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("pas ok");
// 	return (0);
// }