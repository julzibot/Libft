# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jibot <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 19:19:15 by jibot             #+#    #+#              #
#    Updated: 2021/11/01 23:44:46 by jibot            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_strlen.c ft_bzero.c ft_memcpy.c ft_memset.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_atoi.c ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strmapi.c ft_strnstr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

B_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

B_OBJS	= ${B_SRCS:.c=.o}

NAME	= libft.a

NAMEB	= bonus.a

CC		= gcc

AR		= ar rc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

all:		${NAME}

bonus:		${NAMEB}
			
.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
			${AR} ${NAME} ${OBJS}
			
${NAMEB}:	${B_OBJS}
			${AR} ${NAME} ${B_OBJS}

clean: 
			${RM} ${OBJS} ${B_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus_re:	fclean bonus

.PHONY:		all clean fclean re
