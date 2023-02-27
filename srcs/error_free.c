/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:17:22 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/27 12:39:11 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	write(2, "Error", 6);
	exit(1);
}

void	free_stack(t_value *val)
{
	t_node	*tmp;
	t_node	*next;

	tmp = val->a->bottom;
	while (tmp)
	{
		next = tmp->prev;
		free(tmp);
		tmp = next;
	}
	free(val->a);
	free(val->b);
}
