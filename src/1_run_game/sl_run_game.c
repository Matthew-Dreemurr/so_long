/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_run_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:04:19 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 15:22:24 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_run_game.h"

static void	key_hook_debug(t_data *data ,int keycode)
{
	printf("[%d]\n", keycode);
	printf("Item: [%lu]\n", data->plyr.col_item);
	printf("Move: [%lu]\n", data->plyr.n_move);
	for (ssize_t i = 0; i < (data->map.size.y); i++)
	{
		printf("\n");
		for (ssize_t y = 0; y < (data->map.size.x + 1); y++)
			if (data->map.grid[i][y] == '0')
			{
				printf(" ");
			}
			else
				printf("%c", data->map.grid[i][y]);
	}
}


/**
 * @brief
 * 
 *         ^ [w][13]
 *         |
 *   < - - 0 - - >
 *   [a][0]|[d][2]
 *         v [s][1]
 *
 */
int	key_hook(int keycode, t_data *data)
{
	static int				key[KEYBIND_NB] = {KEY_W, KEY_S, KEY_A, KEY_D};
	static t_key_bind_func	f[KEYBIND_NB] = {key_w, key_s, key_a, key_d};
	int						index;

	index = 0;
	while (index < KEYBIND_NB)
	{
		if (keycode == key[index])
			f[index](data);
		index++;
	}
	key_hook_debug(data, keycode);//DEBUG
	mlx_put_image_to_window(data->mlx, data->win, data->test_asset.img, 0, 0);
	mlx_put_image_to_window(data->mlx, data->win, data->test_asset2.img, data->plyr.y, data->plyr.x);
	return (0);
}

void	test_mlx(t_data *data)
{
	data->test_asset.path = "./src/asset/Linus_THICC_Tips.xpm";
	data->test_asset2.path = "./src/asset/30x30.xpm";
	int	y = data->plyr.y * 10;
	int	x = data->plyr.x * 10;
	data->test_asset.img = mlx_xpm_file_to_image(data->mlx, data->test_asset.path, &x, &y);
	data->test_asset2.img = mlx_xpm_file_to_image(data->mlx, data->test_asset2.path, &data->test_asset2.x, &data->test_asset2.y);
	printf("Img data [%p]\n", data->test_asset.img);
}

void	sl_run_game(t_data *data)
{
	data->mlx = mlx_init();
	// data->test_asset.img = mlx_new_image(data->mlx, 1920, 1080);
	// data->test_asset.add = mlx_get_data_addr(data->test_asset.img, &data->test_asset.bpp, &data->test_asset.slen, &data->test_asset.endian);
	data->win = mlx_new_window(data->mlx, 250, 250, "WIP!");
	test_mlx(data);
	mlx_key_hook(data->win, key_hook, data);
	// mlx_hook()
	printf("MLX_LOOP = %d\n", mlx_loop(data->mlx));//DEBUG
}
