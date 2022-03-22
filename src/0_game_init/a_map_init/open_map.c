/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:44:43 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/10 12:50:06 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_map_init.h"

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

static int	check_ber_extension(char const *map_file)
{
	size_t	len;
	size_t	len_extension;
	char	*extesion;

	extesion = ".ber";
	len_extension = strlen_protect(extesion);
	len = strlen_protect(map_file);
	if (len <= len_extension)
		return (0);
	map_file += len - len_extension;
	if (!ft_strstr(map_file, extesion))
		return (0);
	return (1);
}

/**
 * @brief check if the file is a .ber and open it
 */
void	open_map(char const *map_file, t_data *data)
{
	int		fd;

	if (!check_ber_extension(map_file))
		exit_prog(EXIT_FAILURE, ERR_BAD_FILE_NAME, data);
	fd = open(map_file, O_RDONLY);
	if (fd < 0)
		exit_prog(EXIT_FAILURE, strerror(errno), data);
	read_map(fd, data);
}
