/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:26:15 by evarache          #+#    #+#             */
/*   Updated: 2025/11/19 17:10:40 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strmapi applies the function f to each character of the string s, passing 
// its index as the first argument and the character itself as the second. 
// A new string is created (using malloc(3)) to store the
// results from the successive applications of f.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	i = 0;
	new_str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
char	ft_replace(unsigned int i, char c)
{
	c = 'i';
	printf("%d\n", i);
	return (c);
}
*/
// char    ft_alternate_case(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return ft_toupper(c);
//     else
//         return ft_tolower(c);
// }
// int	main()
// {
// char *b = "override this !";
//         size_t size = strlen(b);
//         size_t alloc_size;
//         ft_strmapi(b, f_strmapi);
//         alloc_size = get_last_malloc_size();
//         if (alloc_size == size + 1)
//                 exit(TEST_SUCCESS);
//         exit(TEST_FAILED);
// 	char *str = "chat";
// 	char *str2 = ft_strmapi(str, &ft_alternate_case);

// 	printf("%s\n", str2);
// }
