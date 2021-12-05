/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/05 15:13:13 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exit_prog.h"

void	exit_prog(int ret, char *msg/* , t_data *data */)
{
	/* Free all allocation form t_data and t_vector
	if (data)
		free_data();
	*/
	if (ret == EXIT_FAILURE)
		ft_putstr(R EXIT_MSG_FAIL CR);
	if (msg)
		printf(Y"  %s\n"CR, msg);
	exit (ret);
}
