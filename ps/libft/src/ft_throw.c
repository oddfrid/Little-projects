/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_throw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:52:13 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:52:21 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_stdio.h"

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_throw(const char *error_message, int error_code)
{
	if (error_message != NULL)
	{
		ft_putstr_fd(RED, STDERR_FILENO);
		ft_putstr_fd(error_message, STDERR_FILENO);
		ft_putendl_fd(WHITE, STDERR_FILENO);
	}
	exit(error_code);
}
