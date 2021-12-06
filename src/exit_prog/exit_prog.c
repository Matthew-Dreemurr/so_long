/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/06 17:02:20 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exit_prog.h"
#include "data_struct.h"

void	exit_prog(int ret, char *msg, t_data *data)
{
	/* Free all allocation form t_data and t_vector
	if (data)
		free_data();
	*/
	if (data->map.grid)
		free(data->map.grid);
	if (ret == EXIT_FAILURE)
		ft_putstr(R EXIT_MSG_FAIL CR);
	if (msg)
		printf(Y"  %s\n"CR, msg);
	exit (ret);
}
