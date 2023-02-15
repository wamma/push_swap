/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:53:51 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/15 16:49:14 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\f' || c == '\v' \
		|| c == 'r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ps_atoi(char *str)
{
	size_t		i;
	long		sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0' && ft_is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			ft_error("Error");
		result = result * 10 + (str[i++] - '0');
	}
	result = result * sign;
	if (result > MAX_INT || result < MIN_INT)
		ft_error("Error");
	return (result);
}
