/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:39:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/01 17:12:16 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_init.h"

/**
 * @brief check if the file is a .ber and open it
 * 
 * @param map 
 * @param data_file 
 */
static void	read_map(char const *map, t_data *data)
{
	int		fd;
	char	*check_ext;

	(void)data;
	check_ext = ft_strnstr(map, ".ber", NAME_MAX + 1);
	if (!check_ext)
		exit_prog(EXIT_FAILURE, ERR_BAD_FILE_NAME);
	fd = open(map, O_RDONLY);
	if (fd < 0)
		exit_prog(EXIT_FAILURE, strerror(errno));
}

/**
 * @brief define all pointer to `NULL` to check later if is allocated and
 *         will be free if (<ptr>)
 * 
 * @param data 
 */
static void	struct_init(t_data *data)
{
	data->map.grid = NULL;
}

/**
 * @brief 
 * 
 * @param map 
 * @param data 
 */
void	game_init(char const *map, t_data *data)
{
	struct_init(data);
	read_map(map, data);
}
