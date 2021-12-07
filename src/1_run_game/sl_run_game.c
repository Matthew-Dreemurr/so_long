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
	static t_key_bind_func	f[KEYBIND_NB_FUNC] = {key_w, key_s, key_a, key_s};

	(void)key;
	f[2](data);
	printf("[%d]\n", keycode);
	return (0);
}

void	sl_run_game(t_data *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, 1, 1, "WIP!");
	mlx_key_hook(data->win, key_hook, data);
	mlx_loop(data->mlx);
}
