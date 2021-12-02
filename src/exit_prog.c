/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:22:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 14:43:30 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exit_prog.h"
#include "libft.h"

void	exit_prog(int ret, char *msg/* , t_data *data */)
{
	/* Free all allocation form t_data and t_vector
	if (data)
		free_data();
	*/
	if (ret == EXIT_FAILURE)
		ft_putstr(EXIT_MSG_FAIL);
	if (msg)
		printf("  %s\n", msg);
	exit (ret);
}
