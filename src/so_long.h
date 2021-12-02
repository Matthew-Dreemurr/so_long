/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:30:03 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 15:11:35 by mahadad          ###   ########.fr       */
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

# include "error_msg.h"

# include "data_struct.h"

# include "game_init.h"

# include "exit_prog.h"

#endif