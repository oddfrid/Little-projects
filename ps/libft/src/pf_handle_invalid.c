/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_invalid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 11:13:50 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 11:13:51 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pf_handle_placeholder.h"

#include "ft_stdlib.h"
#include "ft_string.h"

#include <stdarg.h>
#include <stddef.h>

char	*handle_invalid(t_fields *fields, va_list ap)
{
	char	*result;

	if (!(result = ft_strnew(0)))
		return (NULL);
	ft_bzero(fields, sizeof(*fields));
	(void)ap;
	return (result);
}
