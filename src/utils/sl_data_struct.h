/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_data_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:57:08 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/08 10:57:05 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SL_DATA_STRUCT_H
# define SL_DATA_STRUCT_H

# include "vector.h"
# include <stddef.h>
# include <sys/types.h>

/**
 * @brief 
 * 
 */
typedef struct s_coord
{
	ssize_t	x;
	ssize_t	y;
}t_coord;

/**
 * @brief 
 * 
 */
typedef struct s_player
{
	ssize_t	y;
	ssize_t x;
	size_t	col_item;
	size_t	n_move;
}t_player;

typedef struct s_items
{
	size_t	player;
	size_t	collectible;
	size_t	exit;
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

typedef struct s_asset
{
	void	*img;
	void	*add;
	int		bpp;
	int		slen;
	int		endian;
}t_asset;

/**
 * @brief 
 * 
 */
typedef struct s_data
{
	t_player	plyr;
	t_map		map;
	t_vector	vect;
	void		*mlx;
	void		*win;
	t_asset		test_asset;
}t_data;

#endif