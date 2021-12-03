/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:43:13 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/03 22:07:46 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_init.h"

void	check_map(t_data *data)
{
	check_map_shape(data);
	printf("size x: %lu, y: %lu", data->map.size.x, data->map.size.y);
	check_map_charcater(data);
	check_map_border(data);
	// check_map_player_and_items();
}