/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:06:55 by aalseri           #+#    #+#             */
/*   Updated: 2022/03/12 13:11:00 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
#include <fcntl.h>

char	*get_next_line(int fd);
char    *ft_strdup(char *src);
char    *ft_strchr(const char *s, int c);
char    *ft_strjoin(char const *s1, char const *s2);

#endif
