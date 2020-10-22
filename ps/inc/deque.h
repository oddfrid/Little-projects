/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:42:31 by blord             #+#    #+#             */
/*   Updated: 2020/09/28 19:42:31 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_H
# define DEQUE_H

# include <stdbool.h>
# include <stddef.h>

typedef struct	s_deque
{
	int		*values;
	size_t	size;
}				t_deque;

size_t			get_min_index(t_deque *deque);
size_t			get_max_index(t_deque *deque);
int				get_min_value(t_deque *deque);
int				get_max_value(t_deque *deque);

void			push_back(t_deque *deque, int value);
void			push_front(t_deque *deque, int value);
int				pop_back(t_deque *deque);
int				pop_front(t_deque *deque);

void			initialize_deque(t_deque *deque, int beg, int end,
									char *argv[]);
bool			is_sorted(t_deque *deque);

#endif
