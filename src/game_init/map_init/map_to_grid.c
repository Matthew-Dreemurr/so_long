/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:33:03 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/06 15:11:43 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_init.h"

/**
 * put data.vec.buff -> data.map.grid
 * 
 */

void	alloc_grid(t_data *data)
{
	data->map.grid = malloc(sizeof(char **) * data->map.size.y);
	if (!data->map.grid)
		exit_prog(EXIT_FAILURE, "malloc err\n");
}

void	map_to_grid(t_data *data)
{
	alloc_grid(data);
}
