/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:57:08 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/30 16:09:48 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

/* --== [ prototypes ] ==--- */

typedef struct s_vec
{
	long	x;
	long	y;
}t_vec;

typedef struct s_player
{
	t_vec	coord;
	size_t	col_item;
	size_t	n_move;
}t_player;

typedef struct s_map
{
	char	**grid;
	t_vec	item;
	size_t	n_item;
}t_map;

typedef struct s_data
{
	t_player	plyr;
	t_map		map;
}t_data;

#endif