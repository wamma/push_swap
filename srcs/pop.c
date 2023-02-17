/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:59:26 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/17 14:09:54 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*pop_top(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->top;
	if (stack->size == 1)
	{
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else if (stack->size == 2)
	{
		stack->bottom->next = NULL;
		stack->top->prev = NULL;
		stack->top = stack->bottom;
	}
	else
	{
		stack->top = stack->top->next;
		stack->top->next = NULL;
	}
	tmp->prev = NULL;
	stack->size--;
	return (tmp);
}