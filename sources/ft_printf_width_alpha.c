/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width_alpha.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:43:15 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:43:24 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_width_alpha(char *str, t_struct *s)
{
	if (s->minus == 0 && s->zero == 0)
	{
		ft_printf_spaces(s);
		write(1, str, s->nbc);
	}
	else if (s->minus == 1)
	{
		write(1, str, s->nbc);
		ft_printf_spaces(s);
	}
	else if (s->zero == 1)
	{
		ft_printf_zeros(s);
		write(1, str, s->nbc);
	}
}
