/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_asterisk.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:27:14 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:27:16 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PF_HANDLE_ASTERISK_H
# define PF_HANDLE_ASTERISK_H

# include "pf_handle_placeholder.h"

# include <stdarg.h>

void	handle_asterisk(t_fields *fields, va_list ap);

#endif
