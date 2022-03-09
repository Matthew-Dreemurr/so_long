/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:56:20 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/09 10:38:02 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 2 || !av[1])
		exit_prog(EXIT_FAILURE, (char *[]){ETOO_MUCH_ARG, ENO_ARG}[ac == 1],
			NULL);
	game_init(av[1], &data);
	sl_run_game(&data);
	exit_prog(EXIT_SUCCESS, NULL, &data);
	return (EXIT_SUCCESS);
}
