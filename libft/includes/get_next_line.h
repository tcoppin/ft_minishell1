/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 18:50:14 by tcoppin           #+#    #+#             */
/*   Updated: 2015/03/25 18:50:18 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100

# include <sys/types.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <unistd.h>
# include "libft.h"
# include <sys/uio.h>

int				get_next_line(int const fd, char **line);

#endif
