/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:14:20 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 12:05:49 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset( void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char*)s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

/*fran
int main(void)
{
    char str[10];

	ft_debug_tab(str, 10);
    ft_memset(str, 1000, 10);
	printf("Mon résultat : %s\n", str);
	ft_debug_tab(str, 10);

	char str2[10];
	ft_debug_tab(str2, 10);
	memset(str2, 1000, 10);	
    printf("Résultat : %s\n", str2);
	ft_debug_tab(str2, 10);

    return 0;
}

void	ft_debug_tab(char tab[], int size)
{
	int i;

	i = -1;
	while (i < size + 1)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}*/