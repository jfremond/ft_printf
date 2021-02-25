/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:23:55 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 21:42:57 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_init_struct(t_struct *s)
{
	s->i = 0;
	s->len = 0;
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