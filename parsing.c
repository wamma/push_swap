/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:26:42 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/06 18:15:57 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing(char *str, t_ps *a) //split으로 공백 나누고 atoi 해주기
{
	int		i;
	char	**tmp;

	i = 0;
	tmp = ft_split(str, ' ');
	if (!tmp)
		ft_error("Invalid argument");
	while (tmp[i])
	{
		if (!ft_atoi(tmp[i]))
			ft_error("Empty args");
		i++;
	}
	free(tmp);
}
