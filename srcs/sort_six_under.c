/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_six_under.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:33:12 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/24 15:32:05 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_two(t_value *val)
{
	if (val->a->top->data > val->a->top->next->data)
		sa(val->a);
}

static void	sort_three(t_value *val)
{
	int	one;
	int	two;
	int	three;

	one = val->a->top->data;
	two = val->a->top->next->data;
	three = val->a->bottom->data;
	if (one < two && one > three && two > three)
		sa(val->a);
	else if (one > two && one > three && three > two)
		ra(val->a);
	else if (one < two && one > three && two > three)
		rra(val->a);
	else if (one < two && one < three && two > three)
	{
		sa(val->a);
		ra(val->a);
	}
	else if (one > two && one > three && two > three)
	{
		sa(val->a);
		rra(val->a);
	}
}

void	sort_six_under(t_value *val)
{
	if (val->a->size == 2)
		sort_two(val->a);
	else if (val->a->size == 3)
		sort_three(val->a);
}
