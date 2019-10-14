/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcolor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:34:31 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/07/20 10:59:18 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printcolor(char *msg, char *color)
{
	if (!ft_strcmp("green", color))
	{
		ft_putstr("\x1b[32m");
		ft_putstr(msg);
	}
	if (!ft_strcmp("red", color))
	{
		ft_putstr("\x1b[31m");
		ft_putstr(msg);
	}
	if (!ft_strcmp("yellow", color))
	{
		ft_putstr("\x1b[33m");
		ft_putstr(msg);
	}
	if (!ft_strcmp("blue", color))
	{
		ft_putstr("\x1b[34m");
		ft_putstr(msg);
	}
}
