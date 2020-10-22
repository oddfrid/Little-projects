/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:47:11 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:47:12 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s) + 1;
	if (!(new = malloc(len)))
		return (NULL);
	return (ft_memcpy(new, s, len));
}
