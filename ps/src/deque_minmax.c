/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_minmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:41:19 by blord             #+#    #+#             */
/*   Updated: 2020/09/28 19:41:21 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

#include <stddef.h>

size_t	get_min_index(t_deque *deque)
{
	int		min;
	size_t	min_idx;
	size_t	i;

	min = deque->values[0];
	min_idx = 0;
	i = 1;
	while (i < deque->size)
	{
		if (deque->values[i] < min)
		{
			min = deque->values[i];
			min_idx = i;
		}
		++i;
	}
	return (min_idx);
}

size_t	get_max_index(t_deque *deque)
{
	int		max;
	size_t	max_idx;
	size_t	i;

	max = deque->values[0];
	max_idx = 0;
	i = 1;
	while (i < deque->size)
	{
		if (deque->values[i] > max)
		{
			max = deque->values[i];
			max_idx = i;
		}
		++i;
	}
	return (max_idx);
}

int		get_min_value(t_deque *deque)
{
	int		min;
	size_t	i;

	min = deque->values[0];
	i = 1;
	while (i < deque->size)
	{
		if (deque->values[i] < min)
			min = deque->values[i];
		++i;
	}
	return (min);
}

int		get_max_value(t_deque *deque)
{
	int		max;
	size_t	i;

	max = deque->values[0];
	i = 1;
	while (i < deque->size)
	{
		if (deque->values[i] > max)
			max = deque->values[i];
		++i;
	}
	return (max);
}
