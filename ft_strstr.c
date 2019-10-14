/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:33:13 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/06/05 11:17:40 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = -1;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[++i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[++j] == '\0')
				return ((char *)haystack + i);
		}
	}
	return (0);
}
