/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:45:42 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/10/14 11:49:26 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;

	newstr = malloc(size + 1);
	if (newstr == NULL)
		return (NULL);
	ft_memset(newstr, 0, size + 1);
	return (newstr);
}
