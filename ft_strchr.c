/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:51:38 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 20:47:20 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_cast;

	i = 0;
	s_cast = (char *)s;
	while (s_cast[i] != '\0')
	{
		if (c == s_cast[i])
			return (&s_cast[i]);
		i++;
	}
	if (c == '\0')
		return (&s_cast[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n", ft_strchr("chat", 'o'));
    printf("%s\n", strchr("chat", 'o'));
	printf("\n");
	printf("%s\n", ft_strchr("chaot", 'o'));
    printf("%s\n", strchr("chaot", 'o'));
	printf("\n");
	printf("%s\n", ft_strchr("", 'e'));
    printf("%s\n", strchr("", 'e'));
	printf("\n");
	printf("%s\n", ft_strchr("\0", 'e'));
    printf("%s\n", strchr("\0", 'e'));
	printf("\n");
	printf("%s\n", ft_strchr("chat", '\0'));
    printf("%s\n", strchr("chat", '\0'));
	printf("\n");
	printf("%s\n", ft_strchr("", '\0'));
    printf("%s\n", strchr("", '\0'));
	printf("with paco error : \n");
	printf("%s\n", ft_strchr("there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0", '\0'));
  	printf("%s\n", strchr("there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0", '\0'));

	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
 	char *d1 = strchr(src, '\0');
 	char *d2 = ft_strchr(src, '\0');
 
 	if (d1 == d2)
 		printf("OK");
 	printf("pas ok");
	printf("d1 : %p", d1);
	printf("d2 : %p", d2);
	
    return (0);
}*/