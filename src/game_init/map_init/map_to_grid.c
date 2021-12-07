/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:33:03 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 12:17:21 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_init.h"

/**
 * put data.vec.buff -> data.map.grid
 * 
 */

static void	alloc_grid(t_data *data)
{
	size_t	size;

	size = data->map.size.y + 1;
	data->map.grid = malloc(sizeof(char *) * size);
	if (!data->map.grid)
		exit_prog(EXIT_FAILURE, "malloc err\n", data);
	//TODO test how to init all ptr to NULL
	while (--size)
	{
		data->map.grid[size] = NULL;
	}
}

static void	map_mem_move(t_data *data)
{
	ft_substr(data->vect.buff, );

}

void	map_to_grid(t_data *data)
{
	alloc_grid(data);
	map_mem_move(data);
}
