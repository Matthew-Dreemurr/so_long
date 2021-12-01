/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:39:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/01 09:57:41 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_init.h"

/**
 * @brief 
 * 
 * @param map 
 * @param data_file 
 */
static void	read_map(char const *map, t_data *data_file)
{
	int	fd;

	(void)data_file;
	fd = open(map, O_RDONLY);
	if (fd < 0)
		exit (EXIT_FAILURE);
}

/**
 * @brief 
 * 
 * @param map 
 * @param data_file 
 */
void	game_init(char const *map, t_data *data_file)
{
	read_map(map, data_file);
}
