/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:16 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/09 10:41:07 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_exit_prog.h"

/**
 * @brief 
 * 
 * @param t_data 
 */
static void	free_mlx_image(t_data *data)
{
	int	i;

	i = 0;
	while (i < ASSET_NB)
	{
		if (data->asset[i].img)
			mlx_destroy_image(data->mlx, data->asset[i].img);
		i++;
	}
}

static void	free_map_grid(t_data *data)
{
	char	**map;

	map = data->map.grid;
	while (*map)
	{
		free(*map);
		map++;
	}
	free(data->map.grid);
}

void	exit_prog(int ret, char *msg, t_data *data)
{
	if (data)
	{
		if (data->map.grid)
			free_map_grid(data);
		if (data->vect.buff)
			free(data->vect.buff);
		if (data->mlx)
		{
			if (data->win)
				mlx_destroy_window(data->mlx, data->win);
			free_mlx_image(data);
			free(data->mlx);
		}
	}
	if (ret == EXIT_FAILURE)
		ft_putstr_fd(R EXIT_MSG_FAIL CR, STDERR_FILENO);
	if (msg)
		printf(Y"  %s\n"CR, msg);
	exit (ret);
}
