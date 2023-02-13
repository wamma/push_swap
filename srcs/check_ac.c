/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ac.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:04:40 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/13 15:08:02 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(t_node *a)
{
	int		cur_value;
	t_node	*tmp;

	while (a->next)
	{
		tmp = a->next;
		cur_value = a->data;
		while (tmp)
		{
			if (tmp->data == cur_value)
				ft_error("Error");
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
