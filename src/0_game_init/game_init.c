/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:39:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/10 11:39:04 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_game_init.h"

/**
 * @brief find player position and store in `data.plyr.(x\y)
 * 
 * @param data 
 */
//TODO move to a othre file !
static void	find_player(t_data *data)
{
	size_t	x;
	size_t	y;
	char	**map;

	map = data->map.grid;
	x = 0;
	y = 0;
	while (map[y])
	{
		while (map[y][x])
		{
			if (map[y][x] == 'P')
			{
				data->plyr.x = x;
				data->plyr.y = y;
				break ;
			}
			x++;
		}
		x = 0;
		y++;
	}
}

/**
 * @brief 
 * 
 * @param map 
 * @param data 
 */
void	game_init(char const *map_file, t_data *data)
{
	struct_init(data);
	open_map(map_file, data);
	check_map(data);
	map_to_grid(data);
	find_player(data);
}
