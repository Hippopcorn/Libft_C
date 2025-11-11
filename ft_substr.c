/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:58:56 by elsa              #+#    #+#             */
/*   Updated: 2025/11/11 16:16:27 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    unsigned int end;
    char *substring;

    i = 0;
    end = start + len;
    substring = calloc((len + 1), sizeof(char));
    if (!substring)
        return (NULL);
    while (start < end)
    {
        substring[i] = s[start];
        i++;
        start++;
    }
    i++;
    substring[i] = '\0';
    return (substring);
}

int main()
{
    char *str = "chatonloutre";
    char *substr = ft_substr(str, 6, 10);
    printf("%s\n", substr);
}

// si s < n on alloue quand même un tableau de la taille de len
// mais la substring s'arrête a la fin de s
