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
	// printf("[%d]\n", keycode);
	//TODO remove
	for (size_t i = 0; i < (data->map.size.y + 1); i++)
		printf("[%lu]:%s\n", i, data->map.grid[i]);
	return (0);
}

void	sl_run_game(t_data *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, 250, 250, "WIP!");
	mlx_key_hook(data->win, key_hook, data);
	printf("MLX_LOOP = %d\n", mlx_loop(data->mlx));
}
