/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_charcater.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:42:29 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/05 00:25:11 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_init.h"

/**
 * @brief 
 */
static void	count_items(t_data *data, int index)
{
	if (index == 2)
		data->map.items.collectible++;
	else if (index == 3)
		data->map.items.exit++;
	else if (index == 4)
		data->map.items.player++;
}

/**
 * @brief Check if the map is composed only with those char 0, 1, C, E, P, \\n
 */
void	check_map_charcater(t_data *data)
{
	char	*str;
	int		index;

	str = data->vect.buff;
	while (*str)
	{
		index = charsetchar(*str, "01CEP\n");
		printf("\ncharset[%d]\n", index);
		if (index == -1)
			exit_prog(EXIT_FAILURE, EMAP_BAD_CHAR);
		count_items(data, index);
		str++;
	}
	printf("%d\n%d\n%d\n", data->map.items.collectible, data->map.items.exit, data->map.items.player);
}
