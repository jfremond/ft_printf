/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:09:55 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:12:06 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_uint(t_struct *s, va_list args)
{
	long	num;

	num = va_arg(args, unsigned int);
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
