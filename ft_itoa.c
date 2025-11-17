/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:39:00 by evarache          #+#    #+#             */
/*   Updated: 2025/11/13 17:27:36 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// cast n to long for the int min case

static int	ft_size(int n)
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

char	*ft_itoa(int n)
{
	char	*str;
	long	long_n;
	size_t	size;

	long_n = n;
	size = ft_size(n);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		long_n = -long_n;
	}
	str[size--] = '\0';
	if (long_n == 0)
		str[size] = '0';
	while (long_n > 1)
	{
		str[size--] = (long_n % 10) + 48;
		long_n /= 10;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
	return (0);
}
