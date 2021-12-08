/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_keybind_check_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:28:09 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 10:42:54 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "sl_run_game.h"

int	char_0(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	data->plyr.n_move++;
	return (1);
}

int	char_1(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	(void)data;
	return (0);
}

int	char_c(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	data->plyr.n_move++;
	data->plyr.col_item++;
	return (1);
}

int	char_e(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	if (data->plyr.col_item == data->map.items.collectible)
		data->plyr.n_move++;
	else
		return (0);
	exit_prog(EXIT_SUCCESS, "WIN !!\n", data);
	return (1);
}

int	char_err(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	(void)data;
	return (0);
}