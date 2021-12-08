/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_keybind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:34:58 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 13:41:32 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_run_game.h"

int	key_w(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	player_move(data, -1, 0);
	return (1);
}

int	key_s(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	player_move(data, 1, 0);
	return (1);
}

int	key_a(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	player_move(data, 0, -1);
	return (1);
}

int	key_d(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	player_move(data, 0, 1);
	return (1);
}

int	key_esc(t_data *data)
{
	printf("[%s]\n", __FUNCTION__);//DEBUG
	exit_prog(EXIT_SUCCESS, "EXIT!!\n", data);
	return (1);
}
