/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 11:03:11 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/10/14 12:30:21 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if ((subs = malloc(len + 1)) == NULL)
		return (NULL);
	i = -1;
	while (++i < len && s[i])
		subs[i] = s[start + i];
	subs[i] = '\0';
	return (subs);
}
