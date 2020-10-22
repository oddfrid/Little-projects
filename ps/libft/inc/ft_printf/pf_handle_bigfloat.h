/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_bigfloat.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:27:22 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:27:23 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PF_HANDLE_BIGFLOAT_H
# define PF_HANDLE_BIGFLOAT_H

# include "pf_bigint.h"
# include "pf_handle_placeholder.h"

typedef struct	s_bigfloat
{
	t_bigint			decimal;
	t_bigint			fractional;
	unsigned long long	mantissa;
	int					exponent;
	int					sign;
}				t_bigfloat;

void			moar_precision(t_bigint *bi, t_string *fractional,
									int *precision, int i);
void			print_leading_zeros(t_bigfloat *bf, t_fields *fields,
									int *precision, t_string *fractional);
void			print_decimal_part(t_bigfloat *bf, t_string *decimal);
void			print_float(t_string *decimal, t_string *fractional,
							t_fields *fields, char *result);
int				count_leading_zeros(t_bigfloat *bf);
int				round_fractional(t_string *decimal, t_string *fractional,
									t_fields *fields);

#endif
