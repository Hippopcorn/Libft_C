/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:39:00 by evarache          #+#    #+#             */
/*   Updated: 2025/11/12 17:32:14 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//cast n to long for the int min case

char	*ft_itoa(int n)
{
	char	*str;
	char	temp[10];
	int		i;
	int		i_str;
	long	long_n;

	i = 0;
	i_str = 0;
	long_n = n;
	str = ft_calloc(ft_size(n) + 1, sizeof(char));
	if (n < 0)
	{
		str[i_str++] = '-';
		long_n = -long_n;
	}
	while (long_n > 1)
	{
		temp[i] = (long_n % 10) + 48;
		long_n /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		str[i_str] = temp[i];
		i_str++;
		i--;
	}
	str[++i_str] = '\0';
	return (str);
}

int	ft_size(int n)
{
	int		len;
	long	long_n;

	long_n = n;
	if (long_n < 0)
	{
		len = 2;
		long_n = -long_n;
	}
	else
		len = 1;
	while (long_n > 10)
	{
		len++;
		long_n /= 10;
	}
	return (len);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("size : %d", ft_size(-2147483648));
	return (0);
}
