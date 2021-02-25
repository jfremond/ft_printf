/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:42:18 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 17:44:41 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_treat_ptr(t_struct *s, va_list args)
{
	long	num;

	num = (long)va_arg(args, void *);
	s->res = ft_itoa_base(num, "0123456789abcdef");
	while (s->res[s->nbc])
	{
		s->nbc++;
		s->len++;
	}
	ft_printf_prec_ptr(s->res, s);
	free(s->res);
	s->len += 2;
	s->i++;
}
