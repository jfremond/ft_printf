/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:57:42 by jfremond          #+#    #+#             */
/*   Updated: 2021/06/07 09:58:57 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# include "../libft/libft.h"

typedef struct s_struct
{
	int		i;
	int		len;
	int		nbc;
	int		width;
	int		prec;
	int		zero;
	int		minus;
	int		neg;
	int		dot;
	int		count;
	char	type;
	char	*res;
}				t_struct;

void			ft_init_struct(t_struct *s);
void			ft_re_init_struct(t_struct *s);

void			ft_treat_types(t_struct *s, va_list args);

void			ft_treat_char(t_struct *s, va_list args);
void			ft_treat_str(t_struct *s, va_list args);
void			ft_treat_ptr(t_struct *s, va_list args);
void			ft_treat_dec(t_struct *s, va_list args);
void			ft_treat_int(t_struct *s, va_list args);
void			ft_treat_uint(t_struct *s, va_list args);
void			ft_treat_lhexa(t_struct *s, va_list args);
void			ft_treat_uhexa(t_struct *s, va_list args);
void			ft_treat_octal(t_struct *s, va_list args);
void			ft_treat_percent(t_struct *s);

void			ft_parse_spaces(const char *str, t_struct *s);
void			ft_parse_flags(const char *str, t_struct *s);
void			ft_parse_width(const char *str, t_struct *s, va_list args);
void			ft_parse_prec(const char *str, t_struct *s, va_list args);
void			ft_total_parsing(const char *str, t_struct *s, va_list args);

void			ft_printf_zeros(t_struct *s);

void			ft_printf_spaces(t_struct *s);
void			ft_printf_spaces_num(t_struct *s);

void			ft_printf_width_alpha(char *str, t_struct *s);
void			ft_printf_width_num(char *str, t_struct *s);
void			ft_printf_width_num_minus(char *str, t_struct *s);
void			ft_printf_width_ptr(char *str, t_struct *s);

void			ft_printf_prec_alpha(char *str, t_struct *s);
void			ft_printf_prec_num(char *str, t_struct *s);
void			ft_printf_prec_ptr(char *str, t_struct *s);

int				ft_printf(const char *str, ...);

#endif
