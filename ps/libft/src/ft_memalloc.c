/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:42:26 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:42:27 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*area;

	area = NULL;
	if (size && (area = malloc(size)))
		ft_bzero(area, size);
	return (area);
}
