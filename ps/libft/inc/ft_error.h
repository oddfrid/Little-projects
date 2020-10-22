/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:30:11 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:30:13 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

# ifndef WHITE
#  define WHITE		"\033[0;0m"
# endif

# ifndef RED
#  define RED		"\033[1;31m"
# endif

void	ft_throw(const char *error_message, int error_code);

#endif
