/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 09:44:24 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/06/07 11:32:34 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t			i;
	char			*dest;
	char			*source;

	i = -1;
	if ((!dst && !src) || len == 0)
		return (dst);
	dest = (char *)dst;
	source = (char *)src;
	if (source < dest)
		while (len-- > 0)
			dest[len] = source[len];
	else
		while (++i < len)
			dest[i] = source[i];
	return (dest);
}
