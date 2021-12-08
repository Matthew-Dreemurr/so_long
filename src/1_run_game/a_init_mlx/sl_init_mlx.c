/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_mlx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:58:38 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 15:31:50 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_mlx.h"

//TODO in exit_prog close windows and free mlx
/**
 * @brief Init mlx and the windows.
 */
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
	static char	*asset[ASSET_NB] = {FILE_WALL, FILE_GROUND, FILE_COLL,
		FILE_EXIT, FILE_PLAYER};

	i = 0;
	while (i < ASSET_NB)
	{
		data->asset[i].img = mlx_xpm_file_to_image(data->mlx,
				asset[i], &data->asset[i].y, &data->asset[i].x);
		if (!data->asset[i].img)
		{
			printf("Try to open %s\n", asset[i]);
			exit_prog(EXIT_FAILURE, EMLX_XMP_TO_IMG, data);
		}
		i++;
	}
}

void	sl_mlx_init(t_data *data)
{
	sl_mlx_window_init(data);
	sl_init_texture(data);
	sl_print_all_strict(data, '0');
	// sl_print_ground(data);
	// sl_print_wall(data);
}
