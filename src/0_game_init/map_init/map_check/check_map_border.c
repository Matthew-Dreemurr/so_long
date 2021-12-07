/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_border.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:22:26 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 14:23:16 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_map_init.h"

static int	check_edge_line(char *line, size_t x_axis_size)
{
	size_t	i;

	i = 0;
	while (*line && i < x_axis_size)
	{
		if (*line != '1')
			return (0);
		line++;
		i++;
	}
	return (1);
}

/**
 * Checking if the map is close, is parsing eatch edge.
 * The minimum map size is 5x3.
 *   .----------------> X
 *   |  11111
 *   |  1ECP1
 *   |  11111
 *   v
 *   Y
 */
void	check_map_border(t_data *data)
{
	char	*map;
	size_t	max;
	size_t	index;

	index = 0;
	max = (data->map.size.x * data->map.size.y) - data->map.size.x;
	map = data->vect.buff;
	check_edge_line(map, data->map.size.x);
	index = data->map.size.x + 1;
	while (index < max)
	{
		if (!map[index])
			break ;
		if (map[index] != '1')
			exit_prog(EXIT_FAILURE, EMAP_BORDER, data);
		if (map[index + data->map.size.x - 1] != '1')
			exit_prog(EXIT_FAILURE, EMAP_BORDER, data);
		index += data->map.size.x + 1;
	}
	if (!check_edge_line(&map[index], data->map.size.x))
		exit_prog(EXIT_FAILURE, EMAP_BORDER, data);
}
