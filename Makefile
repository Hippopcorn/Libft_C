# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 11:40:40 by evarache          #+#    #+#              #
#    Updated: 2025/11/13 17:58:23 by elsa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_atoi.c    ft_isalnum.c  ft_isdigit.c  ft_memchr.c  ft_memmove.c  ft_strchr.c    ft_strjoin.c  ft_strlen.c   ft_strrchr.c  ft_tolower.c \
ft_bzero.c   ft_isalpha.c  ft_isprint.c  ft_memcmp.c  ft_memset.c   ft_strdup.c    ft_strlcat.c  ft_strncmp.c  ft_strtrim.c  ft_toupper.c \
ft_calloc.c  ft_isascii.c  ft_itoa.c     ft_memcpy.c  ft_split.c    ft_striteri.c  ft_strlcpy.c  ft_strnstr.c  ft_substr.c
OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a

libft: $(NAME)
all: $(NAME)

 $(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re