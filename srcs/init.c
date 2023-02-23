/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:15:32 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/23 16:46:08 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_value	*init_value(void)
{
	val->a = (t_stack *)malloc(sizeof(t_stack));
	val->b = (t_stack *)malloc(sizeof(t_stack));
	if (!a || !b)
		ft_error();
	val->size = 0;
	val->arr = NULL;
	val->a->top = NULL;
	val->a->bottom = NULL;
	val->b->top = NULL;
	val->b->bottom = NULL;
	val->a->size = 0;
	val->b->size = 0;
}

static t_node	*init_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

static void	arr_make(char *argv, t_value *val, int *arr, int sum)
{
	int		i;
	int		j;
	int		index;
	int		num;
	char	**tmp;

	i = 1;
	index = 0;
	while (i < argc)
	{
		j = 0;
		num = 0;
		tmp = ft_split(argv[i]);
		if (!tmp[0])
			ft_error();
		while (j < num)
		{
			arr[index] = ft_atoi(tmp[j]);
			j++;
			val->size++;
		}
		i++;
		free_split(tmp, num);
	}
}

static int	cal_arr_size(int argc, char **argv)
{
	int		i;
	int		num;
	int		sum;
	char	**tmp;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		num = 0;
		tmp = ft_split(argv[i]);
		if (!tmp[0])
			ft_error();
		free_split(tmp, &num);
		sum += num;
		i++;
	}
	return (sum);
}

int	*make_stack(int argc, char **argv, t_value *val)
{
	int		i;
	int		sum;
	int		*arr;
	t_node	*node;

	i = 0;
	sum = cal_arr_size(argc, argv);
	arr = (int *)malloc(sizeof(int) * sum);
	if (!arr)
		ft_error();
	arr_make(argv, val, arr, sum);
	while (i < sum)
	{
		node = init_node(i);
		push_bottom(val->a, node);
		i++;
	}
	return (arr);
}
