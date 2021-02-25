/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:35:52 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 17:38:38 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_char(t_struct *s, va_list args)
{
	char	c;

	c = va_arg(args, int);
	s->nbc++;
	s->len++;
	ft_printf_prec_alpha(&c, s);
	s->i++;
}
