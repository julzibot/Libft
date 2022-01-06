# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jibot <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 19:19:15 by jibot             #+#    #+#              #
#    Updated: 2021/12/08 19:16:00 by jibot            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

AR		= ar rc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

SRCS	= ft_fac.c ft_pwr.c ft_next_prime.c is_prime.c ft_sqrt.c ft_fib.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_strlen.c ft_bzero.c ft_memcpy.c ft_memset.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_atoi.c ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strmapi.c ft_strnstr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
		ft_iputchar_fd.c ft_iputnbr_fd.c ft_iputnbru_fd.c ft_iputstr_fd.c \
		ft_puthex.c ft_puthexp.c ft_printf.c 

OBJS	= ${SRCS:.c=.o}

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
			${AR} ${NAME} ${OBJS}
			
clean: 
			${RM} ${SRCS:.c=.o} ${B_SRCS:.c=.o}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus_re:	fclean bonus

.PHONY:		all clean fclean re
