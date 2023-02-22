/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heongjunpark <heongjunpark@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:15:21 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/22 16:22:53 by heongjunpar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_stack *a, t_stack *b)
{
	if (a->size < 6)
	{
		sort_six_under(a, b);
		return ;
	}
	else
		sort(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		*arr;

	if (argc < 2)
		return (-1);
	a = init_stack();
	b = init_stack();
	a->top = make_stack(argc, argv, &a, arr);
	check_dup(a->top);
	push_swap(a, b);
	free_stack(a, b);
}
