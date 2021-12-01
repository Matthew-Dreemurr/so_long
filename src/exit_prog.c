/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/01 12:34:12 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exit_prog.h"

void	exit_prog(int ret, char const *msg)
{
	ft_putstr(EXIT_MSG_FAIL);
	if (msg)
		ft_putstr(msg);
	exit (ret);
}