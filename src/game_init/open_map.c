/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:44:43 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 15:48:45 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_init.h"

/**
 * @brief 
 */
static void	read_map(int fd, t_data *data)
{
	char		tmp[READ_SIZE + 1];
	size_t		read_ret;

	(void) data;
	if (!vect_init(&data->vect))
		exit_prog(EXIT_FAILURE, EVECT_INIT);
	read_ret = READ_SIZE;
	while (read_ret == READ_SIZE)
	{
		read_ret = read(fd, tmp, READ_SIZE);
		tmp[read_ret] = '\0';
		if (read_ret)
			vect_cat(&data->vect, tmp);
	}
	printf(YEL"MAP:\n%s"CRESET, data->vect.buff);
}

/**
 * @brief check if the file is a .ber and open it
 */
void	open_map(char const *map_file, t_data *data)
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
