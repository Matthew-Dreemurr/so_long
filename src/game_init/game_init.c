/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:39:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 14:51:08 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_init.h"
#include "vector.h"

/**
 * @brief 
 */
static void	read_map(int fd, t_data *data)
{
	char		tmp[READ_SIZE + 1];
	size_t		read_ret;
	t_vector	vect;

	(void) data;
	if (!vect_init(&vect))
		exit_prog(EXIT_FAILURE, EVECT_INIT);
	read_ret = READ_SIZE;
	while (read_ret == READ_SIZE)
	{
		read_ret = read(fd, tmp, READ_SIZE);
		tmp[read_ret] = '\0';
		if (read_ret)
			vect_cat(&vect, tmp);
	}
	printf("%s", vect.buff);
}

/**
 * @brief check if the file is a .ber and open it
 */
static void	open_map(char const *map_file, t_data *data)
{
	int		fd;
	char	*check_ext;

	(void)data;
	check_ext = ft_strstr(map_file, ".ber");
	if (!check_ext)
		exit_prog(EXIT_FAILURE, ERR_BAD_FILE_NAME);
	fd = open(map_file, O_RDONLY);
	if (fd < 0)
		exit_prog(EXIT_FAILURE, strerror(errno));
	read_map(fd, data);
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
void	game_init(char const *map_file, t_data *data)
{
	struct_init(data);
	open_map(map_file, data);
}
