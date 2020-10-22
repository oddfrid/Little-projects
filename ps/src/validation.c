/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:42:12 by blord             #+#    #+#             */
/*   Updated: 2020/09/28 19:42:13 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

#include <limits.h>
#include <stdbool.h>

static bool		is_unique(int pos, char *argv[])
{
	int		i;

	i = 1;
	while (i < pos)
	{
		if (ft_atoll(argv[i]) == ft_atoll(argv[pos]))
			return (false);
		++i;
	}
	return (true);
}

bool			is_valid_input(int argc, char *argv[])
{
	int			i;
	long long	number;
	char		*endptr;

	i = 1;
	while (i < argc)
	{
		number = ft_strtoll(argv[i], &endptr, 10);
		if (*endptr != '\0' ||
			!(INT_MIN <= number && number <= INT_MAX) ||
			!is_unique(i, argv))
			return (false);
		++i;
	}
	return (true);
}
