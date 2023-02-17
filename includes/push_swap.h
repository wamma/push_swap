/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:58:35 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/17 14:14:33 by hyungjup         ###   ########.fr       */
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
	int		size;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

typedef struct s_value
{
	int		ra;
	int		rb;
	int		pa;
	int		pb;
	long	pivot_big;
	long	pivot_small;
}	t_value;

/* ===============./srcs=============== */

void			check_dup(t_node *a);
char			ft_error(char *err);
t_stack			*init_stack(void);
t_node			*init_node(void);
void			connect_list(t_node **tmp, t_node **node, t_stack **stack);
int				set_node(char *av, t_node **node, t_stack **stack);
t_node			*make_stack(int ac, char **av, t_stack **stack);
t_node			*pop_top(t_stack *stack);
int				ps_atoi(char *str);
void			push_top(t_stack *stack, t_node *node);
void			push_bottom(t_stack *stack, t_node *node);
// void			push_pop(t_stack *send, t_stack *receive);
void			push_swap(t_stack *a, t_stack *b);
void			swap_stack(t_stack *stack);

#endif
