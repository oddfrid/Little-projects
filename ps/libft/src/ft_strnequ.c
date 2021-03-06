/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:50:31 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:50:32 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n) == 0);
}
