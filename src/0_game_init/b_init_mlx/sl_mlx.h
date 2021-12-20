/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_mlx.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:52:57 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 15:59:11 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SL_MLX_H
# define SL_MLX_H

# include "sl_error_msg.h"
# include "sl_exit_prog.h"
# include "mlx.h"
# include "sl_data_struct.h"

# define PSIZE   64

# define WINDOW_NAME "So_long"

/* Edit ASSET_NB in `sl_data_struct.h` */

# define AWALL        0
# define FILE_WALL    "./asset/wall.xpm"

# define AGROUND      1
# define FILE_GROUND  "./asset/ground.xpm"

# define ACOLL        2
# define FILE_COLL    "./asset/collec.xpm"

# define AEXIT        3
# define FILE_EXIT    "./asset/exit.xpm"

# define APLAYER      4
# define FILE_PLAYER  "./asset/player.xpm"

void	sl_mlx_init(t_data *data);
void	sl_print_img(t_data *data, int asset_index, int y, int x);
void	sl_print_all_strict(t_data *data, char *set, int texture);

#endif