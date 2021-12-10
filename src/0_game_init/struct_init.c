/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:31:46 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/10 11:38:59 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_game_init.h"

static void	init_map(t_data *data)
{
	data->map.grid = NULL;
	data->map.items.collectible = 0;
	data->map.items.exit = 0;
	data->map.items.player = 0;
	data->map.size.x = 0;
	data->map.size.y = 0;
}

static void	init_player(t_data *data)
{
	data->plyr.col_item = 0;
	data->plyr.n_move = 0;
	data->plyr.x = 0;
	data->plyr.y = 0;
}

static void	init_mlx(t_data *data)
{
	data->mlx = NULL;
	data->win = NULL;
}

/**
 * @brief define all pointer to `NULL` to check later if is allocated and
 *         will be free if (<ptr>)
 * 
 * @param data 
 */
//TODO TODO TODO move function to his own file/folder
//TODO Need to free the image with mlx_destroy_image()
//TODO init all data.asset[ASSET_NB]
void	struct_init(t_data *data)
{
	data->vect.buff = NULL;
	init_map(data);
	init_mlx(data);
	init_player(data);
}
