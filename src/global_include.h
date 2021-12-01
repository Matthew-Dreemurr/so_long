/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_include.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:24:27 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/01 17:18:18 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_INCLUDE_H
# define GLOBAL_INCLUDE_H

/* free, malloc, exit */
# include <stdlib.h>

/* open */
# include <fcntl.h>

/* close, read, write */
# include <unistd.h>

/* printf, perror */
# include <stdio.h>

/* errno, strerror */
# include <errno.h>
# include <string.h>

# include <stddef.h>

/* ----==  [ DEFINE ] ==---- */

# define EXIT_MSG_FAIL "Error\n"
# define ERR_BAD_FILE_NAME "This is not a valid File name\nNeed: <file_name>.ber"

#endif