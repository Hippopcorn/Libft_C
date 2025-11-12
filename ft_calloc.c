/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:37:52 by elsa              #+#    #+#             */
/*   Updated: 2025/11/12 13:00:22 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// The calloc() function contiguously allocates enough space for count
// objects that are size bytes of memory each and returns a pointer to the
// allocated memory.  The allocated memory is filled with bytes of value
// zero.

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	while (i < count)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

/*
#include <stdio.h>
int main()
{
    char **monAlloc = ft_calloc(3, sizeof(char*));
    printf("%p\n", monAlloc);
    for (int i = 0; i < 3; i++)
    {
        printf("%p\n", monAlloc[i]);
    }
    printf("\n");

    char **alloc = calloc(3, sizeof(char*));
    for (int i = 0; i < 3; i++)
    {
        printf("%p\n", alloc[i]);
    }
}*/
