/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width_num.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:44:14 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 21:14:48 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_width_num(char *str, t_struct *s)
{
	if (s->minus == 0 && s->zero == 0)
	{
		if (s->dot)
			ft_printf_spaces_num(s);
		else
			ft_printf_spaces(s);
		if (s->neg == 1)
			write(1, "-", 1);
		ft_printf_prec_num(str, s);
	}
	else if (s->minus == 1)
	{
		if (s->neg == 1)
			write(1, "-", 1);
		ft_printf_prec_num(str, s);
		ft_printf_spaces(s);
	}
	else if (s->zero == 1)
		ft_printf_width_num_minus(str, s);
}

void	ft_printf_width_num_minus(char *str, t_struct *s)
{
	if (s->dot)
	{
		ft_printf_spaces_num(s);
		if (s->neg == 1)
			write(1, "-", 1);
	}
	else
	{
		if (s->neg == 1)
			write(1, "-", 1);
		ft_printf_zeros(s);
	}
	ft_printf_prec_num(str, s);
}
