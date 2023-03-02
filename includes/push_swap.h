/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:58:35 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/24 17:00:08 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	int				size;
	struct t_node	*top;
	struct t_node	*bottom;
}	t_stack;

typedef struct s_value
{
	t_stack	*a;
	t_stack	*b;
	int		size;
	int		*arr;
}	t_value;

/* ===============./srcs=============== */

void	sa(t_value *val, int flag);
void	sb(t_value *val, int flag);
void	ss(t_value *val);
void	pa(t_value *val);
void	pb(t_value *val);
void	ra(t_value *val, int flag);
void	rb(t_value *val, int flag);
void	rr(t_value *val);
void	rra(t_value *val);
void	rrb(t_value *val);
void	rrr(t_value *val);
void	ft_error(void);
void	free_stack(t_value *val);
int		get_max_data(t_value *val);
int		get_cnt(t_value *val, int num);
void	search_best_way(t_value *val, int *a, int *b);
void	init_value(t_value *val);
int		*make_stack(int argc, char **argv, t_value *val);
void	push_top(t_stack *stack, t_node *node);
void	push_bottom(t_stack *stack, t_node *node);
t_node	*pop_top(t_stack *stack);
t_node	*pop_bottom(t_stack *stack);
void	push_swap(t_value *val);
void	sort(t_value *val);
void	sort_six_under(t_value *val);
void	swap_stack(t_stack *stack);

#endif
