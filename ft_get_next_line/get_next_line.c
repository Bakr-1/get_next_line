/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:18:41 by aalseri           #+#    #+#             */
/*   Updated: 2022/03/13 16:37:01 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 500

char	*read_line(char *str)
{
	int i;
	int x;
	char *s;

	i = 0;
	x = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 2));
	i++;
	while (i--)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\n';
	return (s);
}

char    *f_read(int fd, char *str)
{
	char *buffer;
	ssize_t i;
	char *s;

	i = 0;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	i = read(fd, buffer, BUFFER_SIZE);
	if (i == -1)
	{
	free(buffer);
	return (NULL);
	}
	buffer[i] = '\0';
	str = buffer;
	return (str);
}

char *get_next_line(int fd)
{
	static char *str;
	char 		*s;

	str = f_read(fd, str);
	s = read_line(str);
	printf("str :%s\n", str);
	return (str);
}

int	main()
{
	int	fd;

	fd = open("text.txt", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	//get_next_line(fd);
}