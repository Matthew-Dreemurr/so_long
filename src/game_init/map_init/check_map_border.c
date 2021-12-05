/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_border.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:22:26 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/05 16:55:06 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_init.h"

static void	map_first_last(t_data *data)
{
	size_t	i;
	char	*str;

	i = 0;
	str = data->vect.buff;
	while (*str && i < data->map.size.x)
	{
		if (*str != '1')
			exit_prog(EXIT_FAILURE, EMAP_BORDER);
		str++;
		i++;
	}
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
	max = data->map.size.x * data->map.size.y;
	map_first_last(data);
	map = data->vect.buff;
	while (index < max)
	{
		index += data->map.size.x + 1;
		if (!map[index])
			break ;
		if (map[index] != '1')
			exit_prog(EXIT_FAILURE, "test");
		if (map[index + data->map.size.x - 1] != '1')
			exit_prog(EXIT_FAILURE, "test");
	}
}
