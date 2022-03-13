/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:01:17 by aalseri           #+#    #+#             */
/*   Updated: 2022/03/13 12:52:32 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	strlength(char *str)
{
	int	i;

	i = 0;
	while(str++)
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*s;

	if (!s1)
		s[0] = '\0';
	str = malloc(sizeof(char) * (strlength((char *)s2) + strlength((char *)s1) + 1));
	if (!str)
		return (NULL);
	s = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (s);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(strlength(src) + 1);
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != ((char)c))
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

