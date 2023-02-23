/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:15:21 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/23 17:13:07 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_arr(t_value *val, int *arr)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	flag = 0;
	while (i < val->a->size - 1)
	{
		j = i + 1;
		while (j < val->a->size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	push_swap(t_value *val)
{
	if (val->a->size < 6)
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
	flag = check_arr(&val, arr);
	if (!flag)
		return (0);
	val.arr = arr;
	push_swap(&val);
	free_stack(a, b);
}
