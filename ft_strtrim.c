/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:19:00 by elsa              #+#    #+#             */
/*   Updated: 2025/11/18 16:17:28 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strtrim allocates memory (using malloc(3)) and returns a copy of ’s1’ 
// with characters from ’set’ removed from the beginning and the end.

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     // tests index start et index end
//     // printf("%d\n", ft_get_index_start("loutre", "")); // retourne 0
//     // printf("%d\n", ft_get_index_start("loutre", "loutre")); // retourne 6
//     // printf("%d\n", ft_get_index_start("loutre", "lotre")); // retourne 2
//     // printf("%d\n", ft_get_index_start("", "jh")); // retourne 0
//     // printf("\n");
//     // printf("%d\n", ft_get_index_end("loutre", "")); // retourne 5
//     // printf("%d\n", ft_get_index_end("loutre", "loutre")); // retourne -1
//     // printf("%d\n", ft_get_index_end("loutre", "lotre")); // retourne 2
//     // printf("%d\n", ft_get_index_end("", "jh")); // retourne -1

//     // char *str = ft_strtrim("loutre", "rel");  // doit retourner out
//     // printf("%s\n", str);
//     // char *str2 = ft_strtrim("", "rel");  // doit retourner NULL
//     // printf("%s\n", str2);
//     // char *str3 = ft_strtrim("loutre", "");  // 
//     // printf("%s\n", str3);
// }