/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_lhexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:12:51 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:15:03 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_lhexa(t_struct *s, va_list args)
{
	unsigned int	num;

	num = (unsigned int)va_arg(args, int);
	s->res = ft_itoa_base(num, "0123456789abcdef");
	while (s->res[s->nbc])
	{
		s->nbc++;
		s->len++;
	}
	ft_printf_width_num(s->res, s);
	free(s->res);
	s->i++;
}
