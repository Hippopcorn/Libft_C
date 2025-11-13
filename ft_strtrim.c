/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:19:00 by elsa              #+#    #+#             */
/*   Updated: 2025/11/13 09:48:24 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_index_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	i_set;
	char	found;

	i = 0;
	i_set = 0;
	while (s1[i])
	{
		found = 0;
		while (set[i_set])
		{
			if (s1[i] == set[i_set])
			{
				found = 1;
				break ;
			}
			i_set++;
		}
		if (found == 0)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_get_index_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	i_set;
	char	found;

	i = ft_strlen(s1) - 1;
	i_set = 0;
	while (i > 0)
	{
		found = 0;
		while (set[i_set])
		{
			if (s1[i] == set[i_set])
			{
				found = 1;
				break ;
			}
			i_set++;
		}
		if (found == 0)
			return (i);
		i_set = 0;
		i--;
	}
	return (i - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_start;
	int		i_end;
	int		i;
	int		len;
	char	*new_string;

	i_start = ft_get_index_start(s1, set);
	i_end = ft_get_index_end(s1, set);
	if (i_start == 6 || i_end == -1)
		len = 0;
	else
		len = (i_end - i_start) + 1;
	i = 0;
	new_string = ft_calloc(len + 1, sizeof(char));
	while (i_start <= i_end)
	{
		new_string[i] = s1[i_start];
		i++;
		i_start++;
	}
	i++;
	new_string[i] = '\0';
	return (new_string);
}

/*
#include <stdio.h>
int main()
{
    // tests index start et index end
    printf("%d\n", ft_get_index_start("loutre", "")); // retourne 0
    printf("%d\n", ft_get_index_start("loutre", "loutre")); // retourne 6
    printf("%d\n", ft_get_index_start("loutre", "lotre")); // retourne 2
    printf("%d\n", ft_get_index_start("", "jh")); // retourne 0
    printf("\n");
    printf("%d\n", ft_get_index_end("loutre", "")); // retourne 5
    printf("%d\n", ft_get_index_end("loutre", "loutre")); // retourne -1
    printf("%d\n", ft_get_index_end("loutre", "lotre")); // retourne 2
    printf("%d\n", ft_get_index_end("", "jh")); // retourne -1

    char *str = ft_strtrim("loutre", "rel");  // doit retourner out
    printf("%s\n", str);
    char *str2 = ft_strtrim("", "rel");  // doit retourner NULL
    printf("%s\n", str2);
    char *str3 = ft_strtrim("loutre", "");  // 
    printf("%s\n", str3);
}*/