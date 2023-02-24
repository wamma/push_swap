/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:15:21 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/24 15:32:15 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	check_dup(t_value *val, int *arr)
{
	int		cur_value;
	t_node	*tmp;

	while (val->a->next)
	{
		tmp = a->next;
		cur_value = a->data;
		while (tmp)
		{
			if (tmp->data == cur_value)
				ft_error();
			if (tmp->next)
				tmp = tmp->next;
			else
				break ;
		}
		a = a->next;
	}
	while (a->prev)
		a = a->prev;
}

static void	check_dup(t_value *val, int *arr)
{
	int	i;

	i = 0;
	while (i < val->a->size - 1)
	{
		if (arr[i] == arr[i + 1])
			ft_error();
		i++;
	}
}

static int	arr_valid_check(t_value *val, int *arr)
{
	int	i;
	int	j;
	int	tmp;
	int	flag;

	i = 0;
	flag = 0;
	while (i < val->a->size - 1)
	{
		j = i + 1;
		while (j < val->a->size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				flag++;
			}
			j++;
		}
		i++;
	}
	check_dup(val, arr);
	return (flag);
}

void	push_swap(t_value *val)
{
	if (val->a->size <= 3)
	{
		sort_six_under(val->a);
		return ;
	}
	else
		sort(val->a, val->b);
}

int	main(int argc, char **argv)
{
	t_value	val;
	int		flag;
	int		*arr;

	if (argc < 2)
		return (-1);
	val = init_value();
	arr = make_stack(argc, argv, &val);
	flag = arr_valid_check(&val, arr);
	if (!flag)
		return (0);
	val.arr = arr;
	push_swap(&val);
	free_stack(a, b);
}
