# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 16:38:25 by jfremond          #+#    #+#              #
#    Updated: 2021/02/25 17:23:01 by jfremond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

OBJS_D	= sources/

OBJS_N	= ft_init_struct.o			\
		  ft_re_init_struct.o		\
		  ft_treat_types.o			\
		  ft_treat_char.o			\
		  ft_treat_str.o			\
		  ft_treat_ptr.o			\
		  ft_treat_dec.o			\
		  ft_treat_int.o			\
		  ft_treat_uint.o			\
		  ft_treat_lhexa.o			\
		  ft_treat_uhexa.o			\
		  ft_treat_octal.o			\
		  ft_treat_percent.o		\
		  ft_total_parsing.o		\
		  ft_printf_zeros.o			\
		  ft_printf_spaces.o		\
		  ft_printf_width_alpha.o	\
		  ft_printf_width_num.o		\
		  ft_printf_width_ptr.o		\
		  ft_printf_prec_alpha.o	\
		  ft_printf_prec_num.o		\
		  ft_printf_prec_ptr.o		\
		  ft_printf.o

OBJS_P	= ${addprefix ${OBJS_D}, ${OBJS_N}}

LIBFT_D	= libft/

LIBFT_N	= ft_strlen.o				\
		  ft_strrev.o				\
		  ft_strdup.o				\
		  ft_itoa_base.o			\
		  ft_atoi.o

LIBFT_P	= ${addprefix ${LIBFT_D}, ${LIBFT_N}}

INCS	= -I includes/

CC		= gcc
CFLAGS	= -c -Wall -Wextra -Werror

${NAME}:	${OBJS_P} ${LIBFT_P}
			make -C ${LIBFT_D}
			cp libft/libft.a ${NAME}
			ar -rcs ${NAME} ${OBJS_P}

all:		${NAME}

clean:		
			${MAKE} clean -C ${LIBFT_D}
			rm -rf ${OBJS_P}

fclean:		clean
			${MAKE} fclean -C ${LIBFT_D}
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
