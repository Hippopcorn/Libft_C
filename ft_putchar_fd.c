/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:24:06 by elsa              #+#    #+#             */
/*   Updated: 2025/11/17 14:43:35 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
int	main(void)
{
	int	fd;
    
    fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	if (fd == -1)
		return (1);
    
	//printf("fd = %d\n", fd);
    ft_putchar_fd('e', fd);
	//write(fd, "Hello World!\n", 13);
    
	close(fd);
	return (0);
}*/