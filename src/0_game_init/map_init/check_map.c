/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:43:13 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/07 14:23:16 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sl_map_init.h"

void	check_map(t_data *data)
{
	check_map_shape(data);
	check_map_charcater(data);
	check_map_border(data);
}
