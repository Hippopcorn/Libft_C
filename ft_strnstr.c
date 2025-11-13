/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:25:41 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 11:56:39 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (big_cast[i] != '\0' && i < len && ft_strlen(little) < len)
	{
		if (big_cast[i] == little_cast[0])
		{
			j = 0;
			while (big_cast[i + j] == little_cast[j])
			{
				j++;
				if (little_cast[j] == '\0' || j == len - 1)
					return (&big_cast[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
char *strnstr(const char *haystack, const char *needle, size_t len) {
    size_t i, j;

    if (*needle == '\0')
        return (char *)haystack;

    for (i = 0; haystack[i] && i < len; i++) {
        for (j = 0; needle[j] && i + j < 
		len && haystack[i + j] == needle[j]; j++);
        if (needle[j] == '\0')
            return (char *)&haystack[i];
    }
    return NULL;
}

int main(void) {
    const char *text = "loutrela";
    const char *mot = "tre";

    char *resultat_vrai = strnstr(text, mot, 9);

    printf("resultat_vrai : \"%s\"\n", resultat_vrai);

	char *Mon_resultat = ft_strnstr(text, mot, 9);

    printf("Mon_resultat : \"%s\"\n", Mon_resultat);
  
}*/