/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:54:08 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:54:09 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pf_handle_placeholder.h"

#include "ft_stdlib.h"

#include <stdarg.h>
#include <stddef.h>

char	*handle_char(t_fields *fields, va_list ap)
{
	char	*result;

	if (!(result = ft_strnew(1)))
		return (NULL);
	result[0] = (char)va_arg(ap, int);
	(void)fields;
	return (result);
}
