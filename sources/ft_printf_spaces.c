/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spaces.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:41:40 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:41:55 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_spaces(t_struct *s)
{
	while (s->width - s->nbc > s->count)
	{
		write(1, " ", 1);
		s->width--;
		s->len++;
	}
}

void	ft_printf_spaces_num(t_struct *s)
{
	if (s->res[0] == '0' && s->count == 0 && s->prec == 0)
		s->width += 1;
	if (s->count < s->prec)
		s->count = s->prec;
	if (s->count > s->nbc)
	{
		while (s->width > s->count)
		{
			write(1, " ", 1);
			s->width--;
			s->len++;
		}
	}
	else
	{
		while (s->width > s->nbc)
		{
			write(1, " ", 1);
			s->width--;
			s->len++;
		}
	}
}
