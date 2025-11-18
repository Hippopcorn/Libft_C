/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:25:41 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 16:16:16 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strnstr locates the first occurrence of the 
// null-terminated string little in the string haystack, where not 
// more than len characters are searched.
// Characters that appear after a ‘\0’ character are not searched.

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char			*big_cast;
	char			*little_cast;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	big_cast = (char *)big;
	little_cast = (char *)little;
	if (little[0] == '\0')
		return (big_cast);
	while (big_cast[i] && i < len && ft_strlen(little) <= len)
	{
		if (big_cast[i] == little_cast[0])
		{
			j = 0;
			while (big_cast[i + j] == little_cast[j] && i + j < len)
			{
				if (little_cast[j + 1] == '\0' || j == len - 1)
					return (&big_cast[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

//#include <string.h>
// char *strnstr(const char *haystack, const char *needle, size_t len) {
//     size_t i, j;

//     if (*needle == '\0')
//         return (char *)haystack;

//     for (i = 0; haystack[i] && i < len; i++) {
//         for (j = 0; needle[j] && i + j < 
// 		len && haystack[i + j] == needle[j]; j++);
//         if (needle[j] == '\0')
//             return (char *)&haystack[i];
//     }
//     return NULL;
// }

// int main(void) {
//     const char *text = "loutrela";
//     const char *mot = "tre";

//     char *resultat_vrai = strnstr(text, mot, 9);

//     printf("resultat_vrai : \"%s\"\n", resultat_vrai);

// 	char *Mon_resultat = ft_strnstr(text, mot, 9);

//     printf("Mon_resultat : \"%s\"\n", Mon_resultat);

// 	char *s11 = "AAAAAAAAAAAAA";
// 	size_t max = strlen(s11);
// 	char *i1 = strnstr(s11, s11, max);
// 	char *i2 = ft_strnstr(s11, s11, max);
// 	printf("fct: %s\n", i1);
// 	printf("moi :%s\n", i2);

// 	if (i1 == i2)
// 			printf("test ok\n");
// 	printf("test pas ok\n");

// 	char *s1 = "MZIRIBMZIRIBMZE123";
// 	char *s2 = "MZIRIBMZE";
// 	size_t max2 = strlen(s2);
// 	printf("%s\n", strnstr(s1, s2, max2));
// 	printf("%s\n", ft_strnstr(s1, s2, max2));
//  }