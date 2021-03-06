/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:45:02 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:45:03 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

#include <unistd.h>

void	ft_putendl(const char *s)
{
	ft_putendl_fd(s, STDOUT_FILENO);
}
