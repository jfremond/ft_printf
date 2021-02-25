/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prec_num.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:49:19 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:49:29 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_prec_num(char *str, t_struct *s)
{
	if (s->dot == 1)
	{
		if (s->prec == 0 && str[0] == '0')
		{
			s->len -= s->nbc;
			s->nbc = 0;
		}
		while (s->prec > s->nbc)
		{
			write(1, "0", 1);
			s->count++;
			s->prec--;
			s->len++;
		}
	}
	write(1, str, s->nbc);
}
