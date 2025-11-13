/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:26:15 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 16:06:17 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	i = 0;
	new_str = calloc (ft_strlen(s) + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[++i] = '\0';
	return (new_str);
}
/*
char	ft_replace(unsigned int i, char c)
{
	c = 'i';
	printf("%d\n", i);
	return (c);
}

char    ft_alternate_case(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    else
        return ft_tolower(c);
}

int	main()
{
	char *str = "chat";
	char *str2 = ft_strmapi(str, &ft_alternate_case);

	printf("%s\n", str2);
}*/
