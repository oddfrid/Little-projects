/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:57:47 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:57:51 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pf_bigint.h"
#include "pf_utils.h"

#include <stddef.h>

void	ulltoa(unsigned long long value, t_string *string)
{
	size_t	length;
	size_t	i;

	length = get_length_unsigned(value, 10);
	i = 0;
	while (i < length)
	{
		string->str[string->len + length - 1 - i] = value % 10 + '0';
		++i;
		value /= 10;
	}
	string->len += length;
}
