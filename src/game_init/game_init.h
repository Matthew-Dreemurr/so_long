/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:36:33 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 14:25:36 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_INIT_H
# define GAME_INIT_H

# include "so_long.h"
# include "libft.h"
# include "exit_prog.h"

# define READ_SIZE 256

void	game_init(char const *map, t_data *data_file);

#endif