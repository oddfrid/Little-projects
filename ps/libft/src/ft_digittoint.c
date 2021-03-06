/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digittoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:34:28 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:34:29 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int		ft_digittoint(int c)
{
	if (ft_isxdigit(c))
		return (ft_isdigit(c) ? c - '0' : c - 'a');
	else
		return (0);
}
