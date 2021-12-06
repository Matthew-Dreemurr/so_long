/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:48 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/06 15:33:46 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXIT_PROG_H
# define EXIT_PROG_H

# include <stdio.h>

# include "error_msg.h"
# include "libft.h"

void	exit_prog(int ret, char *msg, t_data *data);

#endif