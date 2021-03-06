/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_data_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:57:08 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/09 10:23:38 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SL_DATA_STRUCT_H
# define SL_DATA_STRUCT_H

# include "vector.h"
# include <stddef.h>
# include <sys/types.h>

# define ASSET_NB 5

typedef struct s_coord
{
	ssize_t	x;
	ssize_t	y;
}t_coord;

typedef struct s_player
{
	int		y;
	int		x;
	size_t	col_item;
	size_t	n_move;
}t_player;

typedef struct s_items
{
	size_t	player;
	size_t	collectible;
	size_t	exit;
}t_items;

typedef struct s_map
{
	char	**grid;
	t_coord	size;
	t_items	items;
}t_map;

typedef struct s_asset
{
	void	*img;
	char	*path;
	int		x;
	int		y;
}t_asset;

typedef struct s_data
{
	t_player	plyr;
	t_map		map;
	t_vector	vect;
	void		*mlx;
	void		*win;
	t_asset		asset[ASSET_NB];
}t_data;

#endif