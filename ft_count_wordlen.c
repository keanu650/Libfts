/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_wordlen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 08:04:40 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/07/20 08:17:50 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_wordlen(char const *s, char delm)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] == delm)
		i++;
	while (s[i++] && s[i] != delm)
		len++;
	return (len);
}
