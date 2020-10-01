# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtondeli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/26 18:18:02 by jtondeli          #+#    #+#              #
#    Updated: 2020/09/26 19:12:48 by jtondeli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= file.c main.c str.c 

OBJS	= ${SRCS:.c=.o}

NAME	= alexcle+for

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror 

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

alexcle+for:		${OBJS}
					${CC} -o ${NAME} ${OBJS}

all:				${NAME}

clean:
					${RM} ${OBJS}

fclean:				clean
					${RM} ${NAME}

re:					fclean all
