/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:39:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/30 17:17:04 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_init.h"

static void	read_map(char const *map, t_data *data_file)
{
	int	fd;

	fd = open(map, O_RDONLY);
	if (fd < 0)
		exit (EXIT_FAILURE);
	
}

void	game_init(char const *map, t_data *data_file)
{
	read_map(map, data_file);
}
