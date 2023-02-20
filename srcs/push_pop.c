/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:10:36 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/20 17:08:12 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_top(t_stack *stack, t_node *node)
{
	if (!node)
		ft_error();
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bottom = node;
	}
	else if (stack->size == 1)
	{
		stack->top->next = node;
		node->next = stack->top;
		stack->top = node;
	}
	else
	{
		stack->top->next = node;
		node->next = stack->top;
		stack->top = node;
	}
	stack->size++;
}

void	push_bottom(t_stack *stack, t_node *node)
{
	if (!node)
		ft_error();
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bottom = node;
	}
	else if (stack->size == 1)
	{
		stack->bottom->next = node;
		node->prev = stack->top;
		stack->bottom = node;
	}
	else
	{
		stack->bottom->next = node;
		node->prev = stack->bottom;
		stack->bottom = node;
	}
	stack->size++;
}

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
		stack->top = stack->bottom;
		stack->top->prev = NULL;
		stack->top->bottom = NULL;
	}
	else
	{
		stack->top = stack->top->next;
		stack->top-> = stack->top->next;
	}
	tmp->prev = NULL;
	stack->size--;
	return (tmp);
}

t_node	*pop_bottom(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->bottom;
	if (stack->size == 1)
	{
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else if (stack->size == 2)
	{
		stack->bottom = stack->top;
		stack->bottom->prev = NULL;
		stack->bottom->next = NULL;
	}
	else
	{
		stack->bottom = stack->bottom->prev;
		stack->bottom->next = NULL;
	}
	tmp->next = NULL;
	stack->size--;
	return (tmp);
}
