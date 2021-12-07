/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_exit_prog.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:48 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 14:23:33 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SL_EXIT_PROG_H
# define SL_EXIT_PROG_H

# include <stdio.h>

# include "sl_error_msg.h"
# include "sl_data_struct.h"
# include "libft.h"

void	exit_prog(int ret, char *msg, t_data *data);

#endif