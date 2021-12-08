/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_charcater.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:42:29 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 10:40:28 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_map_init.h"

static void	check_items_prerequisite(t_data *data)
{
	int	error;

	error = 0;
	if (data->map.items.collectible < 1)
	{
		printf(Y"%s\n"CR, EMAP_PREQ_COLL);
		error++;
	}
	if (data->map.items.exit < 1)
	{
		printf(Y"%s\n"CR, EMAP_PREQ_EXIT);
		error++;
	}
	if (data->map.items.player != 1)
	{
		printf(Y"%s\n"CR, EMAP_PREQ_PLAYER);
		error++;
	}
	if (error)
		exit_prog(EXIT_FAILURE, "Please fix the map\n", data);
}

/**
 * @brief 
 */
static void	count_items(t_data *data, int index)
{
	if (index == WORDL_COLLEC)
		data->map.items.collectible++;
	else if (index == WORDL_EXIT)
		data->map.items.exit++;
	else if (index == WORDL_PLAYER)
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
		if (index == -1)
			exit_prog(EXIT_FAILURE, EMAP_BAD_CHAR, data);
		count_items(data, index);
		str++;
	}
	printf("Collectible: [%lu]\nExit:        [%lu]\nPlayer:      [%lu]\n",
			data->map.items.collectible,
			data->map.items.exit,
			data->map.items.player);
	check_items_prerequisite(data);
}
