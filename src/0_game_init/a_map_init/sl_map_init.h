/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_map_init.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:06:32 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 16:15:48 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SL_MAP_INIT_H
# define SL_MAP_INIT_H

# define READ_SIZE 1024

# include <stdlib.h>

# include <unistd.h>

# include <string.h>

# include <fcntl.h>

# include <stddef.h>

# include "sl_exit_prog.h"
# include "vector.h"
# include "sl_data_struct.h"
# include "sl_error_msg.h"

# define WORDL_VOID    0
# define WORDL_WALL    1
# define WORDL_COLLEC  2
# define WORDL_EXIT    3
# define WORDL_PLAYER  4

void	open_map(char const *map_file, t_data *data);
void	check_map(t_data *data);
void	check_map_charcater(t_data *data);
void	check_map_shape(t_data *data);
void	check_map_border(t_data *data);
void	map_to_grid(t_data *data);

#endif