/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_border.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:22:26 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/03 22:57:09 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_init.h"

static void	map_first_last(t_data *data)
{
	size_t	i;
	char	*str;

	i = 0;
	str = data->vect.buff;
	while (*str)
	{
		if (*str != '1')
			exit_prog(EXIT_FAILURE, "test");
		else if (i < data->map.size.x)
			break ;
		str++;
	}
}

/**
 * Checking if the map is close, is parsing eatch edge.
 * The minimum map size is 5x3.
 *   .----------------> X
 *   |  11111
 *   |  1ECP1
 *   |  11111
 *   v
 *   Y
 */
void	check_map_border(t_data *data)
{
	char	*map;

	map_first_last(data);
	map = data->vect.buff;
	//TODO checker les ligne entre str[0] -> str[data->map.size.x]
}
