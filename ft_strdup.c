/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:01:42 by evarache          #+#    #+#             */
/*   Updated: 2025/11/10 17:28:42 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

int		ft_strlen(char *str);
/*
#include <stdio.h>

int	main()
{
	char *my_src;
	char *dest;
	my_src = "Hello word!";
	dest = ft_strdup(my_src); 
	printf("%s", dest);
	free(dest);
	
	return (0);
}*/

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!copy)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


// a modifier pour avoir char * strdup( const char * source );