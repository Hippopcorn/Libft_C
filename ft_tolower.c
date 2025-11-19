/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:36:17 by evarache          #+#    #+#             */
/*   Updated: 2025/11/19 11:29:27 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += (97 - 65);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%c\n", ft_tolower('o'));
    printf("%c\n", tolower('o'));

    return (0);
}*/
