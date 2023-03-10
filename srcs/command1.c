/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:50:58 by hyungjup          #+#    #+#             */
/*   Updated: 2023/03/10 19:19:34 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_value *val, int flag)
{
	int	tmp;

	if (val->a->size < 2)
		return ;
	tmp = val->a->top->data;
	val->a->top->data = val->a->top->next->data;
	val->a->top->next->data = tmp;
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	sb(t_value *val, int flag)
{
	int	tmp;

	if (val->b->size < 2)
		return ;
	tmp = val->b->top->data;
	val->b->top->data = val->b->top->next->data;
	val->b->top->next->data = tmp;
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	ss(t_value *val)
{
	sa(val->a, 0);
	sb(val->b, 0);
	write(1, "ss\n", 3);
}

void	pa(t_value *val)
{
	if (val->b->size == 0)
		return ;
	push_top(val->a, val->b->top->data);
	pop_top(val->b);
	write(1, "pa\n", 3);
}

void	pb(t_value *val)
{
	if (val->a->size == 0)
		return ;
	push_top(val->b, val->a->top->data);
	pop_top(val->a);
	write(1, "pb\n", 3);
}
