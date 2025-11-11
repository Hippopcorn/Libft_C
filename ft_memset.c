/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:14:20 by evarache          #+#    #+#             */
/*   Updated: 2025/11/11 09:48:00 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

//void	ft_debug_tab(char tab[], int size);

void	*ft_memset( void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = (char)c;
		p++;
		n--;
	}
	return (s);
}

/*
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