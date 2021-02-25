/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:52:17 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:52:25 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	ft_strlen(char *str);

char	*ft_strrev(char *str);
char	*ft_strdup(char *str);

char	*ft_itoa_base(long nb, char *base);

int		ft_atoi(const char *str);

#endif
