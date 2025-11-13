# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 11:40:40 by evarache          #+#    #+#              #
#    Updated: 2025/11/13 12:13:39 by evarache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
TARGET = libft.a
BUILDDIR := .build/

all: $(TARGET)

libft.a : $(OBJECTS)
	ar rcs $(TARGET) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(TARGET)

re : fclean all