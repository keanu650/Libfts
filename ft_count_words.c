/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 08:04:07 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/07/20 09:00:34 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char delm)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[index])
	{
		while (s[index] == delm)
			index++;
		if (s[index] != delm && s[index])
			count++;
		while (s[index] != delm && s[index])
			index++;
	}
	return (count);
}
