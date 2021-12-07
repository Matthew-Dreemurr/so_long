/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_keybind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:34:58 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 15:57:36 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_run_game.h"

void	key_w(t_data *data)
{
	(void)data;
	printf("%s\n", __FUNCTION__);
	data->plyr.n_move++;
}

void	key_s(t_data *data)
{
	(void)data;
	printf("%s\n", __FUNCTION__);
	data->plyr.n_move++;
}

void	key_a(t_data *data)
{
	(void)data;
	printf("%s\n", __FUNCTION__);
	data->plyr.n_move++;
}

void	key_d(t_data *data)
{
	(void)data;
	printf("%s\n", __FUNCTION__);
	data->plyr.n_move++;
}
