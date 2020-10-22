/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:55:39 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:55:40 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pf_handle_placeholder.h"

#include "ft_stdlib.h"

#include <stdarg.h>
#include <stddef.h>

char	*handle_percent(t_fields *fields, va_list ap)
{
	char	*result;

	if (!(result = ft_strnew(1)))
		return (NULL);
	result[0] = '%';
	(void)fields;
	(void)ap;
	return (result);
}
