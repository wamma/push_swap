/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:58:35 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/20 18:02:36 by hyungjup         ###   ########.fr       */
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

// typedef struct s_value
// {
// 	int		size;
// 	int		*arr;

// }	t_value;

/* ===============./srcs=============== */

void	check_dup(t_node *a);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	ft_error(void);
t_stack	*init_stack(void);
t_node	*init_node(void);
void	connect_list(t_node **tmp, t_node **node, t_stack **stack);
int		set_node(char *argv, t_node **node, t_stack **stack);
t_node	*make_stack(int argc, char **argv, t_stack **stack);
int		ps_atoi(char *str);
void	push_top(t_stack *stack, t_node *node);
void	push_bottom(t_stack *stack, t_node *node);
t_node	*pop_top(t_stack *stack);
t_node	*pop_bottom(t_stack *stack);
void	push_swap(t_stack *a, t_stack *b);
void	swap_stack(t_stack *stack);

#endif
