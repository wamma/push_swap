/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:59:44 by hyungjup          #+#    #+#             */
/*   Updated: 2023/03/14 16:53:55 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max_data(t_value *val)
{
	int		max_data;
	t_node	*node;

	node = val->a->top;
	max_data = node->data;
	while (node)
	{
		if (node->data > max_data)
			maxdata = node->data;
		node = node->next;
	}
	return (max_data);
}

int	get_cnt(t_value *val, int num)
{
	int		i;
	t_node	*node;

	i = 0;
	node = val->a->top;
	while (node)
	{
		if (node->data == num)
			break ;
		i++;
		node = node->next;
	}
	return (i);
}

int	get_min_cnt(t_value *val, int num)
{
	int		tmp;
	t_node	*node;
	int		diff;
	int		diff_minimum;

	node = val->a->top;
	diff_max = MAX_INT;
	while (node)
	{
		if (num > node->data)
			diff = num - node->data;
		else
			diff = node->data - num;
		if (diff_minimum >= diff)
		{
			
		}
		node = node->next;
	}
}

static int	set_a_location(t_value *val, int num)
{
	int	cnt;
	int	max;

	cnt = 0;
	if (val->a->top)
	{
		max = get_max_data(val);
		if (num > max)
			cnt = get_cnt(val, max) + 1;
		else
			cnt = get_min_cnt(val, max);
		if (cnt > val->a->size / 2)
			cnt = (val->a->size - cnt) * (-1);
	}
	return (cnt);
}

/*index는 현재 노드의 인덱스를 b에서 추적하는 데 사용
  num은 현재 노드의 값을 b에 저장하는 데 사용
  a_pos는 현재 노드를 b에서 a로 이동하는 데 필요한 이동 횟수를 저장하는 데 사용
  b_pos는 현재 노드를 b의 현재 위치에서 스택의 맨 위로 이동하는 데 필요한 이동 횟수를 저장하는 데 사용*/

void	search_best_way(t_value *val, int *a, int *b)
{
	int		index;
	int		num;
	int		a_pos;
	int		b_pos;
	t_node	tmp;

	index = 0;
	tmp = val->b->top;
	while (index < val->size)
	{
		num = tmp->data;
		a_pos = set_a_location(val, num);
		if (index > (val->size + 1) / 2)
			b_pos = (val->b->size - index) * (-1);
		else
			b_pos = index;
		if (index == 0 || find_bigger(*a, *b, a_pos, b_pos))
		{
			*a = a_pos;
			*b = b_pos;
		}
		tmp = tmp->next;
		index++;
	}
}
