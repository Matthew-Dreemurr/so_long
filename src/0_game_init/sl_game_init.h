/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_game_init.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:36:33 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/10 11:39:15 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SL_GAME_INIT_H
# define SL_GAME_INIT_H

# include "sl_map_init.h"

void	game_init(char const *map, t_data *data_file);
void	struct_init(t_data *data);

#endif