/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:00:26 by hyungjup          #+#    #+#             */
/*   Updated: 2023/03/13 14:38:20 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_value *val, int *a, int *b)
{
	while (*a > 0 && *b > 0)
	{
		rr(val);
		(*a)--;
		(*b)--;
	}
	while (*a < 0 && *b < 0)
	{
		rrr(val);
		(*a)++;
		(*b)++;
	}
}

void	rotate_a(t_value *val, int *a)
{
	while (*a > 0)
	{
		ra(val, 1);
		(*a)--;
	}
	while (*a < 0)
	{
		rra(val, 1);
		(*a)++;
	}
}

void	rotate_b(t_value *val, int *b)
{
	while (*b > 0)
	{
		rb(val, 1);
		(*b)--;
	}
	while (*b < 0)
	{
		rrb(val, 1);
		(*b)++;
	}
}

void	rotate_last(t_value *val)
{
	int	i;

	i = get_cnt(val, get_max_data(val));
	if (i < val->a->size - 1)
	{
		rra(val, 1);
	}
}
