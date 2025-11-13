/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:01:42 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 11:55:42 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*s1_cast;
	int		i;

	i = 0;
	s1_cast = (char *)s1;
	copy = malloc(sizeof(char) * ft_strlen(s1_cast) + 1);
	if (!copy)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char *my_src;
	char *dest;
	my_src = "kjuhhihifdbdfhbdfhbdfhdfvhdfhb";
	dest = ft_strdup(my_src); 
	printf("Mon dest : %s\n", dest);

	char *my_src2;
	char *dest2;
	my_src2 = "kjuhhihifdbdfhbdfhbdfhdfvhdfhb";
	dest2 = strdup(my_src2); 
	printf("Dest officiel : %s\n", dest2);
	free(dest);
	free(dest2);
	
	return (0);
}
*/