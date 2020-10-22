/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:52:04 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:52:06 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>

char	*ft_strtrim(const char *s)
{
	size_t	beg;
	size_t	end;

	beg = 0;
	end = ft_strlen(s);
	if (end > 0)
	{
		--end;
		while ((s[beg] == ' ' || s[beg] == '\t' || s[beg] == '\n') &&
				beg <= end)
			++beg;
		while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') &&
				beg <= end)
			--end;
	}
	return (ft_strsub(s, beg, end - beg + 1));
}
