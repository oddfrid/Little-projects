/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hd_strtoll.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:29:55 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:29:56 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HD_STRTOLL_H
# define HD_STRTOLL_H

typedef struct	s_strtoll
{
	const char			*str;
	int					base;
	int					sign;
	int					c;
	int					any;
	unsigned long long	res;
}				t_strtoll;

#endif
