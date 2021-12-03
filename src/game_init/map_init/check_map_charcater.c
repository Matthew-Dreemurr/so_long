/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_charcater.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:42:29 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/03 22:53:57 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_init.h"

/**
 * @brief Check if the map is composed only with those char 0, 1, C, E, P, \\n
 */
void	check_map_charcater(t_data *data)
{
	char	*str;

	str = data->vect.buff;
	// if (!charsetstr_strict(data->vect.buff, "01CEP\n"))
		// exit_prog(EXIT_FAILURE, EMAP_BAD_CHAR);
	while (*str)
	{
		if (charsetchar(*str, "01CEP\n"))
			exit_prog(EXIT_FAILURE, EMAP_BAD_CHAR);
		//TODO trouver un moyen de compter le nombre de joueur, collectible et la sortie.
		str++;
	}
}
