/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/06 18:21:53 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exit_prog.h"
#include "data_struct.h"

static void	free_map_grid(t_data *data)
{
	//TODO free sting in the array 
	free(data->map.grid);
}

void	exit_prog(int ret, char *msg, t_data *data)
{
	/* Free all allocation form t_data and t_vector
	if (data)
		free_data();
	*/
	if (!data)
	{
		ft_putstr("ERROR T_DATA *DATA NULL PTR!?!!");
		exit(EXIT_FAILURE);
	}
	if (data->map.grid)
		free_map_grid(data);
	if (data->vect.buff)
		free(data->vect.buff);
	if (ret == EXIT_FAILURE)
		ft_putstr(R EXIT_MSG_FAIL CR);
	if (msg)
		printf(Y"  %s\n"CR, msg);
	exit (ret);
}
