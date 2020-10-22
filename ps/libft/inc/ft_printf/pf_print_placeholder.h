/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_placeholder.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:28:03 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:28:04 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PF_PRINT_PLACEHOLDER_H
# define PF_PRINT_PLACEHOLDER_H

# include "pf_buffer.h"
# include "pf_handle_placeholder.h"

# include <stdarg.h>

int		print_placeholder(t_fields *fields, va_list ap, t_buffer *buf);

#endif
