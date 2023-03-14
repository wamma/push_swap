/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:29:43 by hyungjup          #+#    #+#             */
/*   Updated: 2023/03/14 16:13:53 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_abs(int num)
{
	if (num < 0)
		num *= -1;
	return (num);
}

int	find_bigger(int a, int b, int a_pos, int b_pos)
{
	
}

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
		rotate_both(val, &a, &b);
		rotate_a(val, &a);
		rotate_b(val, &b);
		pa(val);
	}
	rotate_last(val);
}

void	sort(t_value *val)
{
	partition(val);
	greedy_sort(val);
}
