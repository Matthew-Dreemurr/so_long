/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_move_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:31:41 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 16:41:19 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_run_game.h"

static int	check_next_move(char c, t_data *data)
{
	int						index;
	static t_key_bind_func	f[MOVE_NB] = {char_0, char_1, char_c, char_e,
		char_err};

	index = charsetchar(c, "01CE");
	if (index < 0)
		index = MOVE_NB - 1;
	return (f[index](data));
}

/**
 * @brief print the player in the next position and a ground in
 *        the old player position.
 */
static void	apply_move(t_data *data, int y, int x)
{
	data->map.grid[y][x] = 'P';
	sl_print_img(data, APLAYER, y, x);
	data->map.grid[data->plyr.y][data->plyr.x] = '0';
	sl_print_img(data, AGROUND, data->plyr.y, data->plyr.x);
	data->plyr.y = y;
	data->plyr.x = x;
}

/**
 * @brief check if the move can be done and check if we need to store some data
 * 
 * @param y_move 
 * @param x_move 
 */
void	player_move(t_data *data, int y_move, int x_move)
{
	int	y;
	int	x;

	if (x_move < -1 || y_move < -1 || x_move > 1 || y_move > 1)
		return ;
	y = data->plyr.y + y_move;
	x = data->plyr.x + x_move;
	if (y < 0 || y > data->map.size.y || x < 0 || x > data->map.size.x)
		return ;
	if (check_next_move(data->map.grid[y][x], data))
		apply_move(data, y, x);
}
