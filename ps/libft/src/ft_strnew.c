/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:50:40 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:50:42 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

#include <stddef.h>
#include <stdint.h>

char	*ft_strnew(size_t size)
{
	return ((size == SIZE_MAX) ? NULL : ft_memalloc(size + 1));
}
