/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:56:20 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/01 09:59:56 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	// t_data	data;/

	if (ac != 2 || !av[1])
		return (EXIT_FAILURE);
	// game_init(av[1], &data);
	return (EXIT_SUCCESS);
}
