/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:42:34 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:42:35 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*loc;

	loc = ft_memchr(src, c, n);
	if (loc != NULL)
		return (ft_mempcpy(dst, src, loc - src + 1));
	ft_memcpy(dst, src, n);
	return (NULL);
}
