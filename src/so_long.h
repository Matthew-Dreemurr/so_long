/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:30:03 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/01 17:31:07 by mahadad          ###   ########.fr       */
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

# include "struct.h"

# include "game_init.h"

void	exit_prog(int ret, char *msg);

#endif