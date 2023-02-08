/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:15:32 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/08 18:08:01 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->size = 0;
	stack->top = NULL;
	stack->bottom = NULL;
	return (stack);
}

t_node	*init_node(void)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	connect_list(t_node **tmp, t_node **node, t_stack **stack)
{
	if (!*node)
	{
		*node = *tmp;
		(*stack)->top = *node;
	}
	else
	{
		(*node)->next = *tmp;
		(*tmp)->prev = *node;
		*node = (*node)->next;
	}
}

int	set_node(char *av, t_node **node, t_stack **stack)
{
	int		i;
	char	**args;
	t_node	*tmp;

	args = ft_split(av, ' ');
	if (!args || !*args)
		return (0);
	i = 0;
	while (args[i])
	{
		tmp = init_node();
		if (!tmp)
			ft_error();
		tmp->data = ft_atoi(args[i]);
		connect_list(&tmp, node, stack);
		(*stack)->size++;
		free(args[i]);
	}
	// free(args);
	return (1);
}

t_node	*make_stack(int ac, char **av, t_stack **stack)
{
	int		i;
	int		result;
	t_node	*node;

	i = 1;
	node = NULL;
	while (i < ac)
	{
		result = set_node(av[i], &node, stack);
		if (!result)
			ft_error();
	}
	if (!node->next)
		(*stack)->bottom = node;
	while (node->prev)
		node = node->prev;
	return (node);
}