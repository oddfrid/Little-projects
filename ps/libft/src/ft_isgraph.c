/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:37:24 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:37:25 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isgraph(int c)
{
	return ('!' <= c && c <= '~');
}
