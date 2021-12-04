/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:39:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/04 23:13:22 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_init.h"

/**
 * @brief define all pointer to `NULL` to check later if is allocated and
 *         will be free if (<ptr>)
 * 
 * @param data 
 */
static void	struct_init(t_data *data)
{
	data->map.grid = NULL;
	data->map.size.x = 0;
	data->map.size.y = 0;
	data->map.items.collectible = 0;
	data->map.items.exit = 0;
	data->map.items.player = 0;
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
}
