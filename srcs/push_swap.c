/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:15:21 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/15 15:03:37 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_stack *a, t_stack *b)
{
	int	cnt;

	cnt = 0;
	if (a->size == 5)
	{
		//5개 이하 정렬
	}
	else
		a_to_b(a->size, a, b, &cnt);
}
