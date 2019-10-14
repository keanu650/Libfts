/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 12:56:11 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/07/20 11:00:38 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		nbr;

	sign = 1;
	nbr = 0;
	while (*str == 32 || *str == 10 || *str == 9 || *str == 12 ||
			*str == 13 || *str == 11)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str && (*str >= '0' && *str <= '9'))
		nbr = ((nbr * 10) + (*str++ - '0'));
	return (nbr * sign);
}
