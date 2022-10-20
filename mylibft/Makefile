# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 00:55:28 by aelmrabe          #+#    #+#              #
#    Updated: 2022/10/19 02:01:20 by aelmrabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalnum.c\
 		ft_isalpha.c\
 		ft_isascii.c\
 		ft_isdigit.c\
 		ft_strdup.c\
 		ft_isprint.c\
 		ft_memchr.c\
 		ft_memcmp.c\
 		ft_memcpy.c\
 		ft_memmove.c\
 		ft_memset.c\
 		 ft_strcpy.c\
 		ft_strlen.c\
 		 ft_tolower.c\
 		ft_toupper.c\
 		ft_strchr.c\
 		ft_strrchr.c\
 		ft_strncmp.c\
 		ft_strlcpy.c\
 		ft_strlcat.c\
 		ft_putchar.c\
 		ft_putchar_fd.c\
 		ft_putnbr.c\
 		ft_putnbr_fd.c\
 		ft_putstr.c\
 		ft_putstr_fd.c\
 		ft_putendl.c\
 		ft_putendl_fd.c\
 		ft_atoi.c\
 		ft_split.c\
 		ft_strnstr.c\
 		ft_calloc.c\
 		ft_bzero.c\
 		ft_strncpy.c\

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

RM = rm -f

%.o : %.c libft.h
	${CC} ${FLAGS} $< -o $@

${NAME} : ${OBJS}
	ar -rc $@ ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : clean all fclean re