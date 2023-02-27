/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:59:44 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/27 16:52:54 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	search_best_way(t_value *val, int *a, int *b)
{
	int	i;
	int	num;
	int	new_a;
	int	new_b;

	i = 0;
	while (i < val->b->size)
	{
		num = val->b->top->data;
		new_a = find_new_a(val, num);
	}
}
