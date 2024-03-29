/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 09:42:16 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/07/20 08:13:25 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	int		i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0' && n-- > 0)
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}
