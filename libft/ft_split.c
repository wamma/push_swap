/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:36:20 by hyungjup          #+#    #+#             */
/*   Updated: 2023/02/24 15:08:48 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_space(char c)
{
	if (c == 32 || (9 <= c && c <= 13))
		return (1);
	return (0);
}

static int	word_count(char const *str)
{
	int	str_cnt;
	int	flag;

	str_cnt = 0;
	flag = 1;
	while (*str)
	{
		if (flag == 1 && !ft_is_space(*str))
		{
			str_cnt++;
			flag = 0;
		}
		else if (ft_is_space(*str))
			flag = 1;
		str++;
	}
	return (str_cnt);
}

static char	*str_word_print(char const *str)
{
	char	*word;
	int		wc;
	int		i;

	wc = 0;
	i = 0;
	while (str[wc] && !ft_is_space(str[wc]))
		wc++;
	word = (char *)malloc(sizeof(char) * (wc + 1));
	if (!word)
		return (0);
	while (str[i] && !ft_is_space(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free_split(char **arr, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *str, int *i)
{
	char	**result;

	result = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
	if (!result || !str)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_is_space(*str))
			str++;
		if (*str == '\0')
			break ;
		result[*i] = str_word_print(str);
		if (result[*i] == NULL)
		{
			free_split(result, *i);
			return (NULL);
		}
		(*i)++;
		while (*str && !ft_is_space(*str))
			str++;
	}
	result[*i] = NULL;
	return (result);
}
