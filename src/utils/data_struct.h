/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:57:08 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 15:30:56 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_STRUCT_H
# define DATA_STRUCT_H

# include "vector.h"

/**
 * @brief 
 * 
 */
typedef struct s_coord
{
	long	x;
	long	y;
}t_coord;

/**
 * @brief 
 * 
 */
typedef struct s_player
{
	t_coord	coord;
	size_t	col_item;
	size_t	n_move;
}t_player;

/**
 * @brief 
 * 
 */
typedef struct s_map
{
	char	**grid;
	t_coord	item;
	size_t	n_item;
}t_map;

/**
 * @brief 
 * 
 */
typedef struct s_data
{
	t_player	plyr;
	t_map		map;
	t_vector	vect;
}t_data;

#endif