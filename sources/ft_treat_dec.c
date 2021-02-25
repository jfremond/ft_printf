/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:45:24 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 17:48:17 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_dec(t_struct *s, va_list args)
{
	long	num;

	num = (long)va_arg(args, int);
	if (num < 0)
	{
		num *= -1;
		s->neg = 1;
		s->width--;
		s->len++;
	}
	s->res = ft_itoa_base(num, "0123456789");
	while (s->res[s->nbc])
	{
		s->nbc++;
		s->len++;
	}
	ft_printf_width_num(s->res, s);
	free(s->res);
	s->i++;
}
