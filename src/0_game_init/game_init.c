/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:39:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 14:41:11 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_game_init.h"

static void find_player(t_data *data)
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
 * @brief define all pointer to `NULL` to check later if is allocated and
 *         will be free if (<ptr>)
 * 
 * @param data 
 */
//TODO TODO TODO move function to his own file/folder
//TODO check if satic struct init by default all var to `0` or `NULL`.
//TODO Need to free the image with mlx_destroy_image()
//TODO init all data.asset[ASSET_NB]
static void	struct_init(t_data *data)
{
	data->vect.buff = NULL;
	data->map.grid = NULL;
	data->map.size.x = 0;
	data->map.size.y = 0;
	data->map.items.collectible = 0;
	data->map.items.exit = 0;
	data->map.items.player = 0;
	data->plyr.col_item = 0;
	data->plyr.n_move = 0;
	data->plyr.y = 0;
	data->plyr.x = 0;
	data->win = NULL;
	data->mlx = NULL;
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
	printf("PLAYER COOR :[%lu][%lu]\n", data->plyr.y, data->plyr.x);
}
