/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_read_fields.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:28:13 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:28:14 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PF_READ_FIELDS_H
# define PF_READ_FIELDS_H

# include "pf_handle_placeholder.h"

void	read_flags(const char **format, t_fields *fields);
void	read_width(const char **format, t_fields *fields);
void	read_precision(const char **format, t_fields *fields);
void	read_length(const char **format, t_fields *fields);
void	read_type(const char **format, t_fields *fields);

#endif
