/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:41:38 by aalseri           #+#    #+#             */
/*   Updated: 2022/03/27 21:33:58 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ret_nl(char *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!*s)
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	str = malloc(i + 2);
	if (!str)
		return (NULL);
	while (*s && *s != '\n')
		str[j++] = *s++;
	if (*s == '\n')
		str[j++] = '\n';
	str[j] = '\0';
	return (str);
}

char	*first_read(int fd, char *s)
{
	char	*str;
	ssize_t	i;
	size_t	h;

	h = BUFFER_SIZE;
	str = malloc(h + 1);
	if (!str)
		return (NULL);
	i = 1;
	while (!ft_strnl(s) && i)
	{
		i = read(fd, str, BUFFER_SIZE);
		if (i == -1)
			return (ft_free(&str));
		str[i] = '\0';
		s = ft_strjoin(s, str);
	}
	ft_free(&str);
	return (s);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*s;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	s = first_read(fd, s);
	if (!s)
		return (NULL);
	str = ret_nl(s);
	s = extra_read(s);
	return (str);
}

// int main()
// {
// 	int		fd;
// 	char *line;

// 	fd = open("cat.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	// line = get_next_line(fd);
// 	// printf("%s", line);
// }
