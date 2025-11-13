/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:42:10 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 11:30:17 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}

void	ft_replace(unsigned int i, char *str)
{
	str[i] = 'i';
}
/*
int	main()
{
	char *str = "chat";
	ft_striteri(str, &ft_replace);
	printf("%s\n", str);
}*/
