/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:08:04 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/27 16:51:08 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_value *val, int flag)
{
	t_node	*tmp;

	if (val->a->size < 2)
		return ;
	tmp = pop_top(val->a);
	push_bottom(val->a, tmp);
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	rb(t_value *val, int flag)
{
	t_node	*tmp;

	if (val->b->size < 2)
		return ;
	tmp = pop_top(val->b);
	push_bottom(val->b, tmp);
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	rr(t_value *val)
{
	ra(val->a);
	rb(val->b);
	write(1, "rr\n", 3);
}

void	rra(t_value *val)
{
	t_node	*tmp;

	if (val->a->size < 2)
		return ;
	tmp = pop_bottom(val->a);
	push_top(val->a, tmp);
	write(1, "rra\n", 4);
}

void	rrb(t_value *val)
{
	t_node	*tmp;

	if (val->b->size < 2)
		return ;
	tmp = pop_bottom(val->b);
	push_top(val->b, tmp);
	write(1, "rrb\n", 4);
}
