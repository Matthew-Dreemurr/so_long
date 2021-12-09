/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_print_img.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:57:55 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/09 11:10:52 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_mlx.h"

void	sl_print_img(t_data *data, int asset_index, int y, int x)
{
	printf(CYN"print asset_index[%d]\n"CR, asset_index);
	mlx_put_image_to_window(data->mlx, data->win, data->asset[asset_index].img,
		x * PSIZE, y * PSIZE);
}

/**
 * @brief print only a `c` char in `data.map.grid
 * @param c 
 */
void	sl_print_all_strict(t_data *data, char c, int texture)
{
	int		y;
	int		x;
	char	**map;

	map = data->map.grid;
	y = data->map.size.y;
	x = data->map.size.x;
	while (--y > -1)
	{
		printf("Y: [%d]\n", y);//XXX debug
		while (--x > -1)
		{
			printf("X: [%d]\n", x);//XXX debug
			if (map[y][x] == c)
				sl_print_img(data, texture, y, x);
		}
		x = data->map.size.x;
	}
}
