/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hd_strtol.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:29:47 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:29:49 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HD_STRTOL_H
# define HD_STRTOL_H

typedef struct	s_strtol
{
	const char		*str;
	int				base;
	int				sign;
	int				c;
	int				any;
	unsigned long	res;
}				t_strtol;

#endif
