/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prec_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:50:05 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:50:16 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_prec_ptr(char *str, t_struct *s)
{
	if (s->dot == 1)
	{
		while (s->prec > s->nbc)
		{
			write(1, "0", 1);
			s->prec--;
			s->len++;
		}
	}
	ft_printf_width_ptr(str, s);
}
