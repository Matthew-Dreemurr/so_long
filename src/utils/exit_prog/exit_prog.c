/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/10 11:30:42 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_exit_prog.h"
#include "sl_data_struct.h"

//TODO !!
/**
static void	free_mlx_image(t_data *t_data)
{

}
**/

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
	}
	if (ret == EXIT_FAILURE)
		ft_putstr(R EXIT_MSG_FAIL CR);
	if (msg)
		printf(Y"  %s\n"CR, msg);
	exit (ret);
}
