/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:54:52 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:54:52 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pf_handle_length.h"
#include "pf_handle_placeholder.h"
#include "pf_utils.h"

#include "ft_stdlib.h"
#include "ft_string.h"

#include <stdarg.h>
#include <stddef.h>

char	*handle_hex_upper(t_fields *fields, va_list ap)
{
	char	*result;
	char	str[42];
	int		len;
	int		zeros;

	itoa_base_unsigned(get_unsigned(ap, fields->length), HEXU_DIGITS, str);
	len = ft_strlen(str);
	if (len == 1 && *str == '0' && fields->precision == 0)
		return (ft_strnew(0));
	result =
		ft_strnew(60 + ((fields->precision > len) ? fields->precision : len));
	if (!result)
		return (NULL);
	ft_strcpy(result, str);
	zeros = fields->precision - len;
	if (fields->precision != GET_DEFAULT && zeros > 0)
	{
		ft_memmove(result + zeros, result, len + 1);
		ft_memset(result, '0', zeros);
	}
	return (result);
}
