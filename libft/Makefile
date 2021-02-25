# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 18:56:54 by jfremond          #+#    #+#              #
#    Updated: 2021/02/25 18:57:06 by jfremond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_strlen.o		\
		  ft_strrev.o		\
		  ft_strdup.o		\
		  ft_itoa_base.o	\
		  ft_atoi.o			\

${NAME}:	${SRCS}
			ar -rcs ${NAME} ${SRCS}

all:		${NAME}

clean:
			rm -rf ${SRCS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re 
