/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:50:44 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:50:51 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	t_struct	my_struct;
	va_list		args;

	ft_init_struct(&my_struct);
	va_start(args, str);
	while (str[my_struct.i])
	{
		while (str[my_struct.i] && str[my_struct.i] != '%')
		{
			write(1, &str[my_struct.i], 1);
			my_struct.i++;
			my_struct.len++;
		}
		if (str[my_struct.i] == '%')
		{
			my_struct.i++;
			ft_total_parsing(str, &my_struct, args);
			my_struct.type = str[my_struct.i];
			ft_treat_types(&my_struct, args);
		}
		ft_re_init_struct(&my_struct);
	}
	va_end(args);
	return (my_struct.len);
}
