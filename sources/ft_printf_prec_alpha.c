/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prec_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:48:28 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:48:36 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_prec_alpha(char *str, t_struct *s)
{
	if (s->dot == 1)
	{
		if (s->type == 's' && s->prec == 0)
		{
			s->len -= s->nbc;
			s->nbc = 0;
		}
		if (s->prec && s->prec < s->nbc)
		{
			s->len = s->len - s->nbc + s->prec;
			s->nbc = s->prec;
		}
	}
	ft_printf_width_alpha(str, s);
}
