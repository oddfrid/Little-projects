/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabsl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:35:02 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:35:03 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long double		ft_fabsl(long double x)
{
	return (x < 0 ? -x : x);
}
