/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:58:35 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/06 18:09:20 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_ps
{
	int		count;
	t_node	*head;
}	t_ps;

char	ft_error(char *err);
void	parsing(char *str, t_ps *a);

#endif