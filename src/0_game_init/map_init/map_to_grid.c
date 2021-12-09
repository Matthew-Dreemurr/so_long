/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:33:03 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/09 16:47:12 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_map_init.h"

/**
 * put data.vec.buff -> data.map.grid
 * 
 */

static void	alloc_grid(t_data *data)
{
	ssize_t	size;

	size = data->map.size.y;
	data->map.grid = malloc(sizeof(char *) * (size + 1));
	if (!data->map.grid)
		exit_prog(EXIT_FAILURE, "malloc err\n", data);
	while (size >= 0)
		data->map.grid[size--] = NULL;
}

static void	map_mem_move(t_data *data)
{
	ssize_t	index;
	char	**grid;
	char	*map;

	grid = data->map.grid;
	map = data->vect.buff;
	index = 0;
	while (index < data->map.size.y)
	{
		*grid = ft_substr(map, 0, data->map.size.x);
		if (!*grid)
			exit_prog(EXIT_FAILURE, "substr Fail !\n", data);
		map += data->map.size.x + 1;
		grid++;
		index++;
	}
}

void	map_to_grid(t_data *data)
{
	alloc_grid(data);
	map_mem_move(data);
}
