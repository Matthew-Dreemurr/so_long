/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_shape.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:12:28 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 17:12:38 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_init.h"

static size_t	line_len(char *str)
{
	char	*start;

	start = str;
	while (str && *str && *str != '\n')
		str++;
	return (str - start);
}

void	check_map_shape(t_data *data)
{
	size_t	len;
	char	*buff;

	buff = data->vect.buff;
	len = line_len(buff);
	while (*buff)
	{
		if (len != line_len(buff))
			exit_prog(EXIT_FAILURE, EMAP_RECT);
		buff += (size_t []){(len + 1), len}[!*(buff + len)];
	}
}
