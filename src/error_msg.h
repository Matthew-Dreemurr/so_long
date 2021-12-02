/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:24:27 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 15:10:51 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_MSG_H
# define ERROR_MSG_H

# include <stdlib.h>
# include <errno.h>

# define EXIT_MSG_FAIL "Error\n"
# define ERR_BAD_FILE_NAME "Not a valid File name\n  Need: <file_name>.ber"
# define EVECT_INIT "Vector buffer init Alloc() fail\n"

#endif