/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:55:23 by jfremond          #+#    #+#             */
/*   Updated: 2021/02/25 18:55:30 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long nb, char *base)
{
	int		i;
	int		size;
	char	*res;

	if (nb == 0)
		return (ft_strdup("0"));
	i = 0;
	size = ft_strlen(base);
	res = (char *)malloc(sizeof(*res) * (size + 1));
	if (!res)
		return (NULL);
	while (nb != 0)
	{
		res[i++] = base[nb % size];
		nb /= size;
	}
	res[i] = '\0';
	return (ft_strrev(res));
}
