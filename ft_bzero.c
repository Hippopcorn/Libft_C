/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:32:03 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 16:12:03 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_bzero function erases the data in the n bytes of the memory starting at 
// the location pointed to by s, by writing zeros (bytes containing '\0') 
// to that area.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

/*
#include <string.h
int main(void)
{
    char str[10] = "loutre";

    ft_bzero(str, 3);
	printf("Mon resultat : %s\n", str);  
	bzero(str, 3);

    printf("Resultat : %s\n", str);  
    return 0;
}*/
