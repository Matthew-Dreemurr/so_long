/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:20:28 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:03 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  LIBRARY
*       Standard C Library (libc, -lc)
*  
*  SYNOPSIS
*       lude <strings.h>
*  
*       void
*       bzero(void *s, size_t n);
*  
*  DESCRIPTION
*       The bzero() function writes n zeroed bytes to the string s.  If n is
*       zero, bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cpy;

	cpy = (unsigned char *)s;
	while (n)
	{
		*cpy = (char) '\0';
		cpy++;
		n--;
	}
}
