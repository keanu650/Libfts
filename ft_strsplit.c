/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:23:29 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/10/14 12:31:08 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	size_t	j;
	size_t	k;
	size_t	i;

	if (!s || !(split = (char **)malloc(sizeof(*split) *
					ft_count_words(s, c) + 1)))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_count_words(s, c))
	{
		k = 0;
		if (!(split[i] = ft_strnew(ft_count_wordlen(&s[j], c) + 1)))
			split[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			split[i][k++] = s[j++];
		split[i][k] = '\0';
	}
	split[i] = 0;
	return (split);
}
