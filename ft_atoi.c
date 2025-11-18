/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:29:18 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 16:18:37 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_atoi function converts the initial portion of the string pointed to 
// by nptr to int.

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result = result + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main()	
{
	 char * nb;
    int nb_convert;
    int nb_convertTrue;

    nb = "+46468   ";
    nb_convert = ft_atoi(nb);
    nb_convertTrue = atoi(nb);

    printf("%d\n", nb_convert);
    printf("%d\n", nb_convertTrue);

    return (0);
}*/

// modif la foncion pour accepter en entree '      48' ou '    -5' 
// mais pas plusieurs signes
