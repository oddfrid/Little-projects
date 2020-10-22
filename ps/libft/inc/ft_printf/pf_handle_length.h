/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_length.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:27:46 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:27:47 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PF_HANDLE_LENGTH_H
# define PF_HANDLE_LENGTH_H

# include <stdarg.h>

long long			get_signed(va_list ap, int length);
unsigned long long	get_unsigned(va_list ap, int length);
long double			get_float(va_list ap, int length);

#endif
