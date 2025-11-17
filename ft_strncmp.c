/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:27:55 by evarache          #+#    #+#             */
/*   Updated: 2025/11/16 11:43:15 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compare two strings until n

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	diff;
	const unsigned char *us1;
	const unsigned char *us2;
	
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

// 	char *s1 = "\200";
// 	char *s2 = "\0";
// 	int i1 = ((strncmp(s1, s2, 1) > 0) ? 1 : ((strncmp(s1, s2, 1) < 0) ? -1 : 0));
// 	int i2 = ((ft_strncmp(s1, s2, 1) > 0) ? 1 : ((ft_strncmp(s1, s2, 1) < 0) ? -1 : 0));
// 	printf("%d\n", i1);
// 	printf("%d\n", i2);

// 	printf("%d %d\n", s1[0], s2[0]);

	
// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("pas ok");
		
// 	return (0);
	
// }