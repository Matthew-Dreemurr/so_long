/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:06:32 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 17:14:56 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_INIT_H
# define MAP_INIT_H

# define READ_SIZE 256

# include <stdlib.h>

# include <unistd.h>

# include <string.h>

# include <fcntl.h>

# include <stddef.h>

# include "exit_prog.h"
# include "vector.h"
# include "data_struct.h"
# include "error_msg.h"

void	open_map(char const *map_file, t_data *data);
void	check_map(t_data *data);
void	check_map_shape(t_data *data);

#endif