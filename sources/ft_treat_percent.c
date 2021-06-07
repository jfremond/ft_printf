/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:32:04 by jfremond          #+#    #+#             */
/*   Updated: 2021/06/07 09:59:20 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_percent(t_struct *s)
{
	s->nbc++;
	s->len++;
	ft_printf_prec_alpha("%", s);
	s->i++;
}
