/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:57:08 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/04 23:02:16 by mahadad          ###   ########.fr       */
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
	size_t	x;
	size_t	y;
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

typedef struct s_items
{
	int	player;
	int	collectible;
	int	exit;
}t_items;

/**
 * @brief 
 * 
 */
typedef struct s_map
{
	char	**grid;
	t_coord	size;
	t_items	items;
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