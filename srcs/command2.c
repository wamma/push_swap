/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heongjunpark <heongjunpark@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:08:04 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/21 17:13:06 by heongjunpar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *a)
{
	t_node	*tmp;

	if (a->size < 2)
		return ;
	tmp = pop_top(a);
	push_bottom(a, tmp);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	t_node	*tmp;

	if (b->size < 2)
		return ;
	tmp = pop_top(b);
	push_bottom(b, tmp);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}

void	rra(t_stack *a)
{
	t_node	*tmp;

	if (a->size < 2)
		return ;
	tmp = pop_bottom(a);
	push_top(a, tmp);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	t_node	*tmp;

	if (b->size < 2)
		return ;
	tmp = pop_bottom(b);
	push_top(b, tmp);
	write(1, "rrb\n", 4);
}
