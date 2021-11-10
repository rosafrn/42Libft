# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rosferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 22:05:30 by rosferna          #+#    #+#              #
#    Updated: 2021/11/10 16:11:47 by rosferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCS = libft.h

SRCS = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_bzero.c\
		ft_memset.c ft_strlen.c ft_strlcpy.c ft_memcpy.c ft_memmove.c\
		ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_strchr.c\
		ft_strrchr.c ft_strnstr.c ft_strlcat.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

bonus: ${NAME} ${OBJS_B}
	ar rcs ${NAME} ${OBJS_B}

.c.o:
	gcc -Wall -Wextra -Werror -I ${INCS} -c $< -o ${<:c=o}

clean:
	rm -rf ${OBJS} ${OBJS_B}

fclean: clean
	rm -rf ${NAME}

re: fclean all
