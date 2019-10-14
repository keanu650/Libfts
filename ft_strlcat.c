/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 09:48:00 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/06/05 11:16:08 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	t1;
	size_t	t2;
	size_t	i;

	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	i = 0;
	if (dstsize - 1 <= t1 || dstsize == 0)
		return (t2 + dstsize);
	while ((t1 + i < dstsize - 1) && src[i])
	{
		dst[t1 + i] = src[i];
		i++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}
