/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:57:37 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:46:30 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Applies the function ’f’ to each character of the string ’s’
 *        to create a new string (with malloc(3)) resulting from
 *        successive applications of ’f’.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return char* The string created from the successive applications of ’f’.
 *               Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*str_p;
	unsigned int	i;

	if (!f || !s)
		return (NULL);
	i = 0;
	str = (char *)malloc((sizeof(char) * ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	str_p = str;
	while (*s)
		*str_p++ = f(i++, *s++);
	*str_p = '\0';
	return (str);
}
