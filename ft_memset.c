/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:14:20 by evarache          #+#    #+#             */
/*   Updated: 2025/11/07 17:14:22 by evarache         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
//#include <string.h>

void	*ft_memset( void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

/*
int main(void)
{
    char str[10];

    ft_memset(str, 'A', 1);
	printf("Mon résultat : %s\n", str);  // Affiche "AAAAA"
	memset(str, 'A', 1);

    printf("Résultat : %s\n", str);  // Affiche "AAAAA"
    return 0;
}*/