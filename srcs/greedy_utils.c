/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:59:44 by hyungjup          #+#    #+#             */
/*   Updated: 2023/03/02 17:45:09 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max_data(t_value *val)
{
	int		a_top_data;
	t_node	*node;

	node = val->a->top;
	a_top_data = node->data;
	while (node)
	{
		if (node->data > a_top_data)
			a_top_data = node->data;
		node = node->next;
	}
	return (a_top_data);
}

int	get_cnt(t_value *val, int num)
{
	int		index;
	t_node	*a_top;

	index = 0;
	a_top = val->a->top;
	while (a_top)
	{
		if (a_top->data == num)
			break ;
		index++;
		a_top = a_top->next;
	}
	return (index);
}

/*num = b->top->data
  max = a->top->data*/
static int	set_a_location(t_value *val, int b_top_data)
{
	int	cnt;
	int	max;

	cnt = 0;
	if (val->a->top)
	{
		max = get_max_data(val);
		if (b_top_data > max)
			cnt = get_cnt(val, max) + 1;
		else
			cnt = get_min_cnt(val, max);
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
	int		b_top_data;
	int		a_pos;
	int		b_pos;
	t_node	b_top;

	index = 0;
	b_top = val->b->top;
	while (index < val->size)
	{
		b_top_data = b_top->data;
		a_pos = set_a_location(val, b_top_data);
		if (index > (val->size + 1) / 2)
			b_pos = (val->b->size - index) * (-1);
		else
			b_pos = index;
		if (index == 0 || find_bigger(*a, *b, a_pos, b_pos))
		{
			*a = a_pos;
			*b = b_pos;
		}
		b_top = b_top->next;
		index++;
	}
}
