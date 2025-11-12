/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:19:00 by elsa              #+#    #+#             */
/*   Updated: 2025/11/11 18:29:13 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t i_set;
    char    *new_str;
    int count;

    i = 0;
    count = 0;
    i_set = 0;
    while (s1[i]) // on parcoure s1
    {
        while (set[i_set]) // a chaque carac de s1, on parcourt set 
        {
            if (set[i_set + 1] == '\0' && s1[i] != set[i_set])
                return (i);
            else if (s1[i] == set[i_set]) // si set == s1, on veut l'enlever 
            {
                break;
            }
            i_set++;
        }
        // si on a parcouru tout set et que s1 n'en fait pas partie, on stocke l'index start
        count++;
    }
}
*/

int ft_get_start(char const *s1, char const *set)
{
    size_t i;
    size_t i_set;
    char found;

    i = 0;
    i_set = 0;
    while (s1[i]) // on parcoure s1
    {
        found = 0;
        while (set[i_set]) // a chaque carac de s1, on parcourt set 
        {
            if (s1[i] == set[i_set])
            {
                found = 1;
                break;
            }
            i_set++;
        }
        if (found == 0) {
            return (i);
        }
        i++;
    }
    return (i);
}

int ft_get_end(char const *s1, char const *set)
{
    size_t i;
    size_t i_set;
    char found;

    i = ft_strlen(s1) - 1;
    i_set = 0;
    while (i >= 0) // on parcoure s1 par la fin
    {
        found = 0;
        while (set[i_set]) // a chaque carac de s1, on parcourt set 
        {
            if (s1[i] == set[i_set])
            {
                found = 1;
                break;
            }
            i_set++;
        }
        if (found == 0) {
            return (i);
        }
        i--;
    }
    return (i);
}

int main()
{
    printf("%d\n", ft_get_end("loutre", "lore"));
}