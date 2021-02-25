/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:39:33 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 17:41:22 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_str(t_struct *s, va_list args)
{
	s->res = va_arg(args, char *);
	if (s->res == NULL)
		s->res = "(null)";
	while (s->res[s->nbc])
	{
		s->nbc++;
		s->len++;
	}
	ft_printf_prec_alpha(s->res, s);
	s->i++;
}
