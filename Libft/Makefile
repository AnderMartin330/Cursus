# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andemart <andemart@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 15:55:37 by andemart          #+#    #+#              #
#    Updated: 2024/10/08 20:05:13 by andemart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

LIB =  ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strncmp.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_atoi.c \
	   ft_memset.c \
	   ft_memcpy.c \
	   ft_bzero.c \
	   ft_memmove.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_striteri.c \
	   ft_strmapi.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \

OBJS = $(LIB:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	@echo "Objetos eliminados"

fclean: clean
	$(RM) $(NAME)
	@echo "Biblioteca eliminada"

re: fclean all