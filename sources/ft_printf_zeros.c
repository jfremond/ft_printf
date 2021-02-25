/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_zeros.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:40:34 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:40:42 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_zeros(t_struct *s)
{
	while (s->width - s->nbc > s->count)
	{
		write(1, "0", 1);
		s->width--;
		s->len++;
	}
}
