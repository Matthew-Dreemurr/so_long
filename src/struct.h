/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:57:08 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/01 09:58:37 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

/* --== [ prototypes ] ==--- */

/**
 * @brief 
 * 
 */
typedef struct s_vec
{
	long	x;
	long	y;
}t_vec;

/**
 * @brief 
 * 
 */
typedef struct s_player
{
	t_vec	coord;
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
	t_vec	item;
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
}t_data;

#endif