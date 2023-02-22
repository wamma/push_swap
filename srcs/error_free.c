/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heongjunpark <heongjunpark@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:17:22 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/21 17:13:20 by heongjunpar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	write(2, "Error", 6);
	exit(1);
}

void	free_stack(t_stack *a, t_stack *b)
{
	t_node	*tmp;
	t_node	*next;

	tmp = a->bottom;
	while (tmp)
	{
		next = tmp->prev;
		free(tmp);
		tmp = next;
	}
	free(a);
	free(b);
}
