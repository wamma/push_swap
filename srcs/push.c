/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:10:36 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/15 18:16:01 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	push_top(t_stack *stack, t_node *node)
// {

// }

// void	push_bottom(t_stack *stack, t_node *node)
// {

// }

void	push_pop(t_stack *send, t_stack *receive)
{
	if (send->size == 1)
	{
		if (receive->size == 0)
		{
			receive->top = send->top;
			receive->bottom = send->top;
		}
		else
		{
			receive->top->prev = send->top;
			send->top->next = receive->top;
			receive->top = receive->top->prev;
		}
		send->top = NULL;
		send->bottom = NULL;
	}
	else
	{
		if (receive->size == 0)
		{
			receive->top = send->top;
			receive->bottom = send->top;
			send->top = send->top->next;
			send->top->prev = NULL;
			receive->top->next = NULL;
		}
		else
		{
			receive->top->prev = send->top;
			send->top = send->top->next;
			send->top->prev = NULL;
			receive->top->prev->next = receive->top;
			receive->top = receive->top->prev;
		}
	}
}
