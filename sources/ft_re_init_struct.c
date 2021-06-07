/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_re_init_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:26:53 by jfremond          #+#    #+#             */
/*   Updated: 2021/06/07 09:59:13 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_re_init_struct(t_struct *s)
{
	s->nbc = 0;
	s->width = 0;
	s->prec = 0;
	s->zero = 0;
	s->minus = 0;
	s->neg = 0;
	s->dot = 0;
	s->count = 0;
	s->type = 0;
	s->res = NULL;
}
