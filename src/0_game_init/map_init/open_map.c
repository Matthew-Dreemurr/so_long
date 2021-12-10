/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:44:43 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/10 12:05:35 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_map_init.h"

/**
 * @brief 
 */
static void	read_map(int fd, t_data *data)
{
	char		tmp[READ_SIZE + 1];
	size_t		read_ret;

	if (!vect_init(&data->vect))
		exit_prog(EXIT_FAILURE, EVECT_INIT, data);
	read_ret = READ_SIZE;
	while (read_ret == READ_SIZE)
	{
		read_ret = read(fd, tmp, READ_SIZE);
		tmp[read_ret] = '\0';
		if (read_ret)
			vect_cat(&data->vect, tmp);
	}
}

/**
 * @brief check if the file is a .ber and open it
 */
void	open_map(char const *map_file, t_data *data)
{
	int		fd;
	char	*check_ext;

	check_ext = ft_strstr(map_file, ".ber");//TODO WIP just check the last 4 char
	if (*(check_ext + 4))
		exit_prog(EXIT_FAILURE, ERR_BAD_FILE_NAME, data);
	fd = open(map_file, O_RDONLY);
	if (fd < 0)
		exit_prog(EXIT_FAILURE, strerror(errno), data);
	read_map(fd, data);
}
