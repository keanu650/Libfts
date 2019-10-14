/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 11:26:07 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/10/14 12:30:33 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nwstr;
	size_t	nwstr_len;

	if (!s1 || !s2)
		return (NULL);
	nwstr_len = (ft_strlen(s1) + ft_strlen(s2));
	if ((nwstr = malloc(nwstr_len)) == NULL)
		return (NULL);
	ft_strcpy(nwstr, s1);
	ft_strcat(nwstr, s2);
	return (nwstr);
}
