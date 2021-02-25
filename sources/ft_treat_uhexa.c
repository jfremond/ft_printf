/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uhexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:15:49 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:17:51 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_uhexa(t_struct *s, va_list args)
{
	unsigned int	num;

	num = (unsigned int)va_arg(args, int);
	s->res = ft_itoa_base(num, "0123456789ABCDEF");
	while (s->res[s->nbc])
	{
		s->nbc++;
		s->len++;
	}
	ft_printf_width_num(s->res, s);
	free(s->res);
	s->i++;
}
