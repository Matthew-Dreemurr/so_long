/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_keybind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:34:58 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 16:51:50 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_run_game.h"

void	key_w(t_data *data)
{
	(void)data;
	printf("%s\n", __FUNCTION__);
	//TODO fast check, need to remade the key_*();, give as param (data, data.plyr.coord, data.map.grid)
	if ((data->plyr.coord.y - 1) > 0)
	{
		if (data->map.grid[data->plyr.coord.y - 1][data->plyr.coord.x] == '0')
		{
			data->map.grid[data->plyr.coord.y--][data->plyr.coord.x] = '0';
			data->map.grid[data->plyr.coord.y][data->plyr.coord.x] = 'P';
		}
	}
	data->plyr.n_move++;
}

void	key_s(t_data *data)
{
	if ((data->plyr.coord.y + 1) <= data->map.size.y)
	{
		if (data->map.grid[data->plyr.coord.y + 1][data->plyr.coord.x] == '0')
		{
			data->map.grid[data->plyr.coord.y++][data->plyr.coord.x] = '0';
			data->map.grid[data->plyr.coord.y][data->plyr.coord.x] = 'P';
		}
	}
	(void)data;
	printf("%s\n", __FUNCTION__);
	data->plyr.n_move++;
}

void	key_a(t_data *data)
{
	(void)data;
	if ((data->plyr.coord.x - 1) > 0)
	{
		if (data->map.grid[data->plyr.coord.y][data->plyr.coord.x - 1] == '0')
		{
			data->map.grid[data->plyr.coord.y][data->plyr.coord.x--] = '0';
			data->map.grid[data->plyr.coord.y][data->plyr.coord.x] = 'P';
		}
	}
	printf("%s\n", __FUNCTION__);
	data->plyr.n_move++;
}

void	key_d(t_data *data)
{
	(void)data;
	if ((data->plyr.coord.x + 1) <= data->map.size.x)
	{
		if (data->map.grid[data->plyr.coord.y][data->plyr.coord.x + 1] == '0')
		{
			data->map.grid[data->plyr.coord.y][data->plyr.coord.x++] = '0';
			data->map.grid[data->plyr.coord.y][data->plyr.coord.x] = 'P';
		}
	}
	printf("%s\n", __FUNCTION__);
	data->plyr.n_move++;
}
