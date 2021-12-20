/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_print_img.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:57:55 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/20 15:08:25 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_mlx.h"

void	sl_print_img(t_data *data, int asset_index, int y, int x)
{
	mlx_put_image_to_window(data->mlx, data->win, data->asset[asset_index].img,
		x * PSIZE, y * PSIZE);
}

/**
 * @brief print only a `c` char in `data.map.grid
 * @param c 
 */
void	sl_print_all_strict(t_data *data, char *set, int texture)
{
	int		y;
	int		x;
	char	**map;

	map = data->map.grid;
	y = data->map.size.y;
	x = data->map.size.x;
	while (--y > -1)
	{
		while (--x > -1)
		{
			if (charsetchar(map[y][x], set) >= 0)
				sl_print_img(data, texture, y, x);
		}
		x = data->map.size.x;
	}
}
