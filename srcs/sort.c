/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:29:43 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/27 17:23:48 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	partition(t_value *val)
{
	int		pivot_small;
	int		pivot_big;
	int		i;

	pivot_small = val->arr[val->size / 3];
	pivot_big = val->arr[val->size * 2 / 3];
	i = 0;
	while (val->a->size > 3 && i < val->size)
	{
		if (val->a->top->data <= pivot_small)
		{
			pb(val);
			rb(val, 1);
		}
		else if (val->a->top->data > pivot_small && \
		val->a->top->data <= pivot_big)
			pb(val);
		else
			ra(val, 1);
		i++;
	}
	while (val->a->size > 3)
		pb(val);
	sort_three(val);
}

static void	greedy_sort(t_value *val)
{
	int	a;
	int	b;

	while (val->b->size)
	{
		search_best_way(val, &a, &b);
	}
}

void	sort(t_value *val)
{
	partition(val);
	greedy_sort(val);
}
