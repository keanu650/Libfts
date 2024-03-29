/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:45:35 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/06/06 11:21:18 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((char *)b)[i] = 0;
	return (b);
}
