/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_run_game.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:57:48 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 15:05:33 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SL_RUN_GAME_H
# define SL_RUN_GAME_H

# include "sl_error_msg.h"
# include "sl_exit_prog.h"
# include "mlx.h"
# include "sl_data_struct.h"

# include "sl_mlx.h"

# define KEYBIND_NB 5

# define KEY_W 13
# define KEY_S 1
# define KEY_A 0
# define KEY_D 2
# define KEY_ESC 53

# define MOVE_NB 5

typedef int	(*t_key_bind_func)(t_data *data);

void	sl_run_game(t_data *data);
void	player_move(t_data *data, int y_move, int x_move);

int		key_w(t_data *data);
int		key_s(t_data *data);
int		key_a(t_data *data);
int		key_d(t_data *data);

int		char_0(t_data *data);
int		char_1(t_data *data);
int		char_c(t_data *data);
int		char_e(t_data *data);
int		char_err(t_data *data);
int		key_esc(t_data *data);

#endif