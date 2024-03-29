/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:41:40 by aalseri           #+#    #+#             */
/*   Updated: 2022/03/27 21:34:03 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strnl(char *s);
char	*first_read(int fd, char *s);
char	*get_next_line(int fd);
char	*extra_read(char *s);
char	*ret_nl(char *s);
size_t	ft_strlen(char *s);
char	*ft_free(char **s);

#endif
