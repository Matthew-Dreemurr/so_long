/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_start_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:04:19 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 15:13:57 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_start_game.h"
#include "mlx.h"

int	key_hook(int keycode, t_data *vars)
{
	(void)vars;
	printf("[%d]\n", keycode);
	return (0);
}

void	sl_start_game(t_data *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, 500, 500, "WIP!");
	mlx_key_hook(data->win, key_hook, data);
	mlx_loop(data->mlx);
}
