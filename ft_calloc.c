/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:37:52 by elsa              #+#    #+#             */
/*   Updated: 2025/11/11 10:04:22 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *calloc(size_t count, size_t size)
{
    size_t          i;
    unsigned char   *mem;
    
    i = 0;
    mem = malloc(count * size);
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
    char **monAlloc = calloc(3, sizeof(char*));
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
}

// The calloc() function contiguously allocates enough space for count
// objects that are size bytes of memory each and returns a pointer to the
// allocated memory.  The allocated memory is filled with bytes of value
// zero.
*/  