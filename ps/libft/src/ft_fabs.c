/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:34:38 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:34:39 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_fabs(double x)
{
	return (x < 0 ? -x : x);
}