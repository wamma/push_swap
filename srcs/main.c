/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:53:57 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/08 18:09:35 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	parsing(char *str)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = ft_split(str, ' ');
}

int	main(int ac, char **av)
{
	int		i;
	t_stack	*a;
	t_stack	*b;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			parsing(av[i]);
			printf("%s   ", av[i]);
			i++;
		}
	}
}
