/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:28:32 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:28:33 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PF_UTILS_H
# define PF_UTILS_H

# include "pf_bigint.h"

# include <stddef.h>

void	ft_atoi_skip(const char **str);
size_t	get_length_signed(long long nbr, long long base);
void	itoa_base_signed(long long nbr, char *base, char *result);
size_t	get_length_unsigned(unsigned long long nbr, unsigned long long base);
void	itoa_base_unsigned(unsigned long long nbr, char *base, char *result);
void	ulltoa(unsigned long long value, t_string *string);

#endif
