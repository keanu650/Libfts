/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgobeil- <pgobeil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 21:22:00 by pgobeil-          #+#    #+#             */
/*   Updated: 2019/10/17 14:15:07 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	if (!(s = (char *)malloc((sizeof(char) * (size + 1)))))
		return (NULL);
	ft_memset(s, 0, size + 1);
	return (s);
}
