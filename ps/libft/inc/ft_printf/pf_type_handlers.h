/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_type_handlers.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:28:22 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:28:24 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PF_TYPE_HANDLERS_H
# define PF_TYPE_HANDLERS_H

# include "pf_handle_placeholder.h"

# include <stdarg.h>

char	*handle_char(t_fields *fields, va_list ap);
char	*handle_string(t_fields *fields, va_list ap);
char	*handle_pointer(t_fields *fields, va_list ap);
char	*handle_signed(t_fields *fields, va_list ap);
char	*handle_oct(t_fields *fields, va_list ap);
char	*handle_unsigned(t_fields *fields, va_list ap);
char	*handle_hex_lower(t_fields *fields, va_list ap);
char	*handle_hex_upper(t_fields *fields, va_list ap);
char	*handle_bin(t_fields *fields, va_list ap);
char	*handle_float(t_fields *fields, va_list ap);
char	*handle_percent(t_fields *fields, va_list ap);
char	*handle_invalid(t_fields *fields, va_list ap);

#endif
