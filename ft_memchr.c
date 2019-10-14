/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 09:10:35 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/07/20 10:08:41 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;

	str = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (str[i] == (unsigned char)c)
			return ((unsigned char *)str + i);
	return (NULL);
}
