/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width_ptr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:47:42 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:47:51 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_width_ptr(char *str, t_struct *s)
{
	if (s->minus == 0 && s->zero == 0)
	{
		if (s->width > s->nbc)
			s->width -= 2;
		ft_printf_spaces(s);
		write(1, "0x", 2);
		write(1, str, s->nbc);
	}
	else if (s->minus == 1)
	{
		if (s->width > s->nbc)
			s->width -= 2;
		write(1, "0x", 2);
		write(1, str, s->nbc);
		ft_printf_spaces(s);
	}
	else if (s->zero == 1)
	{
		if (s->width > s->nbc)
			s->width -= 2;
		write(1, "0x", 2);
		ft_printf_zeros(s);
		write(1, str, s->nbc);
	}
}
