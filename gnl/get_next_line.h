/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:10:45 by mboturch          #+#    #+#             */
/*   Updated: 2019/11/08 15:33:06 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 15
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef	struct				s_gnl
{
	int						fd;
	char					*rem;
	struct s_gnl			*next;
}							t_gnl;

t_gnl						*newlist(const int fd);
char						*check_rem(char **line, char *rem);
int							get_line(const int fd, char **line, char *rem);
int							get_next_line(const int fd, char **line);

#endif
