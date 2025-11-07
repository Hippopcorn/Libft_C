#ifndef LIBFT_H
# define LIBFT_H

//typedef unsigned int size_t;  // https://en.wikipedia.org/wiki/C_data_types#stddef.h

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *str);
void *ft_memset( void *s, int c, size_t n);
int	ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);

#endif