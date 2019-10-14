/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:49:30 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/10/14 12:31:23 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	cpy;

	str_len = ft_get_strlen(n);
	cpy = n;
	if (n < 0)
	{
		cpy = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = cpy % 10 + '0';
	while (cpy /= 10)
		str[--str_len] = cpy % 10 + '0';
	if (n < 0)
		*str = '-';
	return (str);
}
