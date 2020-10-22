/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:51:39 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:51:41 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (len == SIZE_MAX || !(substr = malloc(len + 1)))
		return (NULL);
	substr[len] = '\0';
	return (ft_strncpy(substr, s + start, len));
}
