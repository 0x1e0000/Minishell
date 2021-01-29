/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:45:13 by ielbadao          #+#    #+#             */
/*   Updated: 2021/01/29 15:57:51 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_split.h"

static int			copy_to_next_delimiter(char *grid_case, char *str,
char delimiter)
{
	int		count;

	count = 0;
	if (!g_flag)
	{
		while (str[count] && str[count] != delimiter)
		{
			grid_case[count] = str[count];
			count++;
		}
		if (count)
			g_flag = 1;
	}
	else
	{
		while (str[count])
		{
			grid_case[count] = str[count];
			count++;
		}
	}
	grid_case[count] = '\0';
	return (count);
}

void	fill_grid(char **arr, char *str, char delimiter)
{
	int		count;
	int		arr_index;

	if (!str || !arr)
		return ;
	arr_index = 0;
	while (*str)
	{
		escape_deilimter(&str, delimiter);
		count = copy_to_next_delimiter(arr[arr_index], str, delimiter);
		str += count;
		arr_index++;
	}
}

void	fill_grid_first(char **arr, char *str, char delimiter)
{
	int		count;
	int		arr_index;

	if (!str || !arr)
		return ;
	arr_index = 0;
	while (*str)
	{
		escape_deilimter(&str, delimiter);
		count =	copy_to_next_delimiter(arr[arr_index], str, delimiter);
		str += count;
		arr_index++;
	}
	g_flag = 0;
}
