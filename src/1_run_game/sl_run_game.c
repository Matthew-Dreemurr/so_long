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
 *            ^ [w][13]
 *            |
 *  [a] < - - 0 - - > [d][2]
 *  [0]       |
 *            v [s][1]
 *
 */
int	key_hook(int keycode, t_data *data)
{
	static int				key[KEYBIND_NB] = {KEY_W, KEY_S, KEY_A, KEY_D,
		KEY_ESC};
	static t_key_bind_func	f[KEYBIND_NB] = {key_w, key_s, key_a, key_d,
		key_esc};
	int						index;

	index = 0;
	while (index < KEYBIND_NB)
	{
		if (keycode == key[index])
			f[index](data);
		index++;
	}
	key_hook_debug(data, keycode);//DEBUG
	//TODO start print /w dMXL
	return (0);
}

void	sl_run_game(t_data *data)
{
	sl_mlx_init(data);
	mlx_key_hook(data->win, key_hook, data);
	printf("MLX_LOOP = %d\n", mlx_loop(data->mlx));//DEBUG
}
