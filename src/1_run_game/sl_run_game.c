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
	return (0);
}

int	closed_windows(t_data *data)
{
	data->win = NULL;
	exit_prog(EXIT_SUCCESS, "Game close\n", data);
	return (1);
}

void	sl_run_game(t_data *data)
{
	sl_mlx_init(data);
	mlx_key_hook(data->win, key_hook, data);
	mlx_hook(data->win, 17, 1L<<0, closed_windows, data);
	mlx_loop(data->mlx);
}
