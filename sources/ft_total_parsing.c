/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_total_parsing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:35:13 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 21:29:09 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_total_parsing(const char *str, t_struct *s, va_list args)
{
	ft_parse_flags(str, s);
	ft_parse_width(str, s, args);
	ft_parse_prec(str, s, args);
}

void	ft_parse_flags(const char *str, t_struct *s)
{
	while (str[s->i] == '0' || str[s->i] == '-')
	{
		if (str[s->i] == '0')
			s->zero = 1;
		if (str[s->i] == '-')
			s->minus = 1;
		s->i++;
	}
}

void	ft_parse_width(const char *str, t_struct *s, va_list args)
{
	if (str[s->i] == '*')
	{
		s->width = va_arg(args, int);
		if (s->width < 0)
		{
			s->minus = 1;
			s->width *= -1;
		}
		s->i++;
	}
	else if (str[s->i] >= '0' && str[s->i] <= '9')
	{
		s->width = ft_atoi(&str[s->i]);
		while (str[s->i] >= '0' && str[s->i] <= '9')
			s->i++;
	}
}

void	ft_parse_prec(const char *str, t_struct *s, va_list args)
{
	if (str[s->i] == '.')
	{
		s->dot = 1;
		s->i++;
	}
	if (str[s->i] == '-')
	{
		s->dot = 0;
		s->i++;
	}
	if (str[s->i] >= '0' && str[s->i] <= '9')
	{
		s->prec = ft_atoi(&str[s->i]);
		while (str[s->i] >= '0' && str[s->i] <= '9')
			s->i++;
	}
	else if (str[s->i] == '*')
	{
		s->prec = va_arg(args, int);
		if (s->prec < 0)
			s->dot = 0;
		s->i++;
	}
}
