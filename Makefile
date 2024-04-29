# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 11:05:39 by logkoege          #+#    #+#              #
#    Updated: 2024/04/26 16:27:04 by logkoege         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

\SRCS = ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memmove.c \
       ft_memset.c \
       ft_strlen.c \
       ft_memcpy.c \
       ft_atoi.c \
       ft_toupper.c \
       ft_tolower.c \
	   ft_bzero.c \
	   ft_strlcat.c \
	   ft_memcmp.c \
	   ft_itoa.c \
	   ft_strdup.c \
	   ft_putchar_fd.c \
	   ft_putnbr_fd.c \
	   ft_putendl_fd.c \
	   ft_memchr.c \
	   ft_strlcpy.c \
	   ft_putstr_fd.c \
	   ft_calloc.c \

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libtf.a
OBJS = $(SRCS:.c=.o)

.c.o:
    $(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
    ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
    $(RM) $(OBJS)

fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re