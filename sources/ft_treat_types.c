/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:29:09 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 17:34:49 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_types(t_struct *s, va_list args)
{
	if (s->type == 'c')
		ft_treat_char(s, args);
	if (s->type == 's')
		ft_treat_str(s, args);
	if (s->type == 'p')
		ft_treat_ptr(s, args);
	if (s->type == 'd')
		ft_treat_dec(s, args);
	if (s->type == 'i')
		ft_treat_int(s, args);
	if (s->type == 'u')
		ft_treat_uint(s, args);
	if (s->type == 'x')
		ft_treat_lhexa(s, args);
	if (s->type == 'X')
		ft_treat_uhexa(s, args);
	if (s->type == 'o')
		ft_treat_octal(s, args);
	if (s->type == '%')
		ft_treat_percent(s);
}
