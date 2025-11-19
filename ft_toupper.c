/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:55:36 by evarache          #+#    #+#             */
/*   Updated: 2025/11/19 11:29:36 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= (97 - 65);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%c\n", ft_toupper('-'));
    printf("%c\n", toupper('-'));

    return (0);
}*/
