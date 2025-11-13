/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:58:05 by elsa              #+#    #+#             */
/*   Updated: 2025/11/13 11:55:49 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	i;
	size_t	i_s2;
	size_t	new_len;

	i = 0;
	i_s2 = 0;
	new_len = ft_strlen(s1) + ft_strlen(s2);
	new_string = ft_calloc(new_len + 1, sizeof(char));
	if (!new_string)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new_string[i] = s1[i];
		i++;
	}
	while (i < new_len)
	{
		new_string[i] = s2[i_s2];
		i++;
		i_s2++;
	}
	new_string[i + 1] = '\0';
	return (new_string);
}
/*
int main()
{
    char *s1 = "chat";
    char *s2 = "cheval";
    char *s3 = ft_strjoin(s1, s2);
    printf("%s\n", s3);
}*/