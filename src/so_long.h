/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:30:03 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 15:22:53 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* ----==  [ includes ] ==---- */

/* free, malloc, exit */
# include <stdlib.h>

/* open */
# include <fcntl.h>

/* close, read, write */
# include <unistd.h>

/* printf, perror, strerror */
# include <stdio.h>

# include <stddef.h>

# include "sl_error_msg.h"

# include "sl_data_struct.h"

# include "sl_game_init.h"

# include "sl_exit_prog.h"

# include "sl_run_game.h"

# include "mlx.h"

#endif