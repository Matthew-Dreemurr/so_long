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
# include "color.h"
# define EXIT_MSG_FAIL "Error\n"
# define ERR_BAD_FILE_NAME "Invalid File name\n    Need: <file_name>.ber"
# define EVECT_INIT "Vector buffer init Alloc() fail\n"
# define ETOO_MUCH_ARG "Too much arguments\n   usage: ./so_long <map>.ber\n"
# define ENO_ARG "Need arguments\n   usage: ./so_long <map>.ber\n"
# define EMAP_RECT "The map is not rectangular or empty line"
# define EMAP_BAD_CHAR "The map must be composed with only 0,1,C,E,P,\\n\n"
# define EMAP_PREQ_COLL "Need at least one collectible `C`\n"
# define EMAP_PREQ_EXIT "Need at least one exit `E`\n"
# define EMAP_PREQ_PLAYER "Need at least/only one player `P`\n"
# define EMAP_BORDER "The edges of the map are not closed\n"

#endif