/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:36:33 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 15:51:32 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_INIT_H
# define GAME_INIT_H

# include <stdlib.h>

# include <unistd.h>

# include <string.h>

# include <fcntl.h>

# include <stddef.h>

# include "exit_prog.h"
# include "vector.h"
# include "data_struct.h"
# include "error_msg.h"

# define READ_SIZE 256

void	game_init(char const *map, t_data *data_file);
void	open_map(char const *map_file, t_data *data);
void	check_map(t_data *data);

#endif