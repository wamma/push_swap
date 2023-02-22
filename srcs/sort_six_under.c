/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_six_under.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heongjunpark <heongjunpark@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:33:12 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/22 19:15:58 by heongjunpar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_two(t_stack *a)
{
	if (a->top->data > a->top->next->data)
		sa(a);
}

static void	sort_three(t_stack *a)
{
	int	one;
	int	two;
	int	three;

	one = a->top->data;
	two = a->top->next->data;
	three = a->bottom->data;
	if (one < two && one > three && two > three)
		sa(a);
	else if (one > two && one > three && three > two)
		ra(a);
	else if (one < two && one > three && two > three)
		rra(a);
	else if (one < two && one < three && two > three)
	{
		sa(a);
		ra(a);
	}
	else if (one > two && one > three && two > three)
	{
		sa(a);
		rra(a);
	}
}

void	sort_five(t_stack *a)
{
	
}

static void	quick_sort(t_stack *a, t_stack *b)
{
	int		pivot_small;
	int		pivot_big;
	int		cnt;
	t_node	tmp;

	cnt = 0;
	pivot_small = 
}

void	sort_six_under(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 5)
		sort_five(a);
}
