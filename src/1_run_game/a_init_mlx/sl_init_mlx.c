/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_init_mlx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:58:38 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 14:50:29 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_init_mlx.h"

//TODO in exit_prog close windows and free mlx
static void	sl_mlx_window_init(t_data *data)
{
	data->mlx = mlx_init();
	if (!data->mlx)
		exit_prog(EXIT_FAILURE, EMLX_INIT, data);
	data->win = mlx_new_window(data->mlx,
			data->map.size.x * PSIZE, data->map.size.y * PSIZE, WINDOW_NAME);
	if (!data->win)
		exit_prog(EXIT_FAILURE, EMLX_WIN, data);
}

//XXX old exemple of player texture init
/**
void	sl_mlx_player(t_data *data)
{
	data->asset[APLAYER].path = "./src/asset/sandbox.xpm";
	data->asset[APLAYER].img = mlx_xpm_file_to_image(data->mlx,
			data->asset[APLAYER].path, &data->asset[APLAYER].x,
			&data->asset[APLAYER].y);
	key_hook(0, data);
}
**/

/**
 * @brief 
 *  | name    | file                    | macro= index |
 *  |---------|-------------------------|--------------|
 *  | wall    | ./asset/wall.xmp        | AWALL=  0    |
 *  | ground  | ./asset/ground.xmp      | AGROUND=1    |
 *  | collec  | ./asset/collec.xmp      | ACOLL=  2    |
 *  | exit    | ./asset/exit.xmp        | AEXIT=  3    |
 *  | player0 | ./asset/player.xpm      | APLAYER=4    |
 */
static void	sl_init_texture(t_data *data)
{
	int			i;
	static char	*asset[ASSET_NB] = {AWALL, AGROUND, ACOLL, AEXIT, APLAYER};

	i = 0;
	while (i < ASSET_NB)
	{
		data->asset[i].path = asset[i];
		i++;
	}
}

void	sl_mlx_init(t_data *data)
{
	sl_init_texture(data);
	sl_mlx_window_init(data);
}
