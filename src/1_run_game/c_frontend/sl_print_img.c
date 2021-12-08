/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_print_img.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:57:55 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 16:59:14 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_mlx.h"

void	sl_print_img(t_data *data, int asset_index, int y, int x)
{
	printf(CYN"print asset_index[%d]\n"CR, asset_index);
	mlx_put_image_to_window(data->mlx, data->win, data->asset[asset_index].img,
		x * PSIZE, y * PSIZE);
}

void	sl_print_ground(t_data *data)
{
	int	y;
	int	x;

	y = data->map.size.y;
	x = data->map.size.x;
	while (--y > -1)
	{
		while (--x > -1)
		{
			sl_print_img(data, AGROUND, y, x);
		}
		x = data->map.size.x;
	}
}

/**
 * @brief print only a `c` char in `data.map.grid
 * @param c 
 */
void	sl_print_all_strict(t_data *data, char c)
{
	int		y;
	int		x;
	char	**map;

	map = data->map.grid;
	y = data->map.size.y;
	x = data->map.size.x;
	while (--y > -1)
	{
		printf("Y: [%d]\n", y);
		while (--x > -1)
		{
			printf("X: [%d]\n", x);
			if (map[y][x] == c)
				sl_print_img(data, AGROUND, y, x);
		}
		x = data->map.size.x;
	}
}
