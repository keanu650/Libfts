/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:29:34 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/07/20 08:13:14 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t		need_len;

	if (*n == '\0')
		return ((char *)h);
	need_len = ft_strlen(n);
	while (*h != '\0' && len-- >= need_len)
	{
		if (*h == *n && ft_memcmp(h, n, need_len) == 0)
			return ((char *)h);
		h++;
	}
	return (NULL);
}
