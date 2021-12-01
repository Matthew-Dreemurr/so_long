/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/01 17:39:45 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exit_prog.h"
#include "libft.h"

void	exit_prog(int ret, char *msg/* , t_data *data */)
{
	/* Free all allocation form t_data
	if (data)
		free_data();
	*/
	if (ret == EXIT_FAILURE)
		ft_putstr(EXIT_MSG_FAIL);
	if (msg)
		ft_putstr(msg);
	exit (ret);
}
