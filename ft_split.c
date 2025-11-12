/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:30:33 by evarache          #+#    #+#             */
/*   Updated: 2025/11/12 16:24:41 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// count_split count the parts that will be disociated to mallloc the tab**
// count_carac will serve to count the caracteres of each part and malloc 
// the right len.
// in split function, we malloc a tab ** of size count_split(), then we run 
//through the string, when we found a 'c', we call ft_count_char with the 
// index we are, malloc a char* with the return of this function, then we 
// complete the tab with the carac until found a 'c'.

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		i_tab;
	int		i_tab_char;

	i = 0;
	i_tab = 0;
	i_tab_char = 0;
	tab = ft_calloc((ft_count_split(s, c) + 1), sizeof(char *));
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			tab[i_tab] = ft_calloc((ft_count_char(s, c, i) + 1), sizeof(char));
			while (s[i] && s[i] != c)
				tab[i_tab][i_tab_char++] = s[i++];
			i_tab_char++;
			tab[i_tab++][i_tab_char] = '\0';
			i_tab_char = 0;
		}
		i++;
	}
	tab[++i_tab] = NULL;
	return (tab);
}

int	ft_count_split(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

int	ft_count_char(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>
int main()
{
	// printf("%d\n", ft_count_split("oooooiooooodiioooooi", 'i')); // 3
	// printf("%d\n", ft_count_split("iooooodiioooooiiio", 'i'));  // 3
	// printf("%d\n", ft_count_split("oiooooodiioooooiiio", 'i'));  // 4
	// printf("%d\n", ft_count_split("oooooiooooodiioooooiiioi", 'i'));  // 4
	// printf("%d\n", ft_count_split("iiii", 'i'));  //  0
	// printf("%d\n", ft_count_split("", 'i'));  //  0

	//printf("%d\n", ft_count_char("oiooooiooooodiioooooi", 'i', 0)); //6

	int i = 0;
	char **test = ft_split("loutreoochevalooloup", 'o');
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
}*/
