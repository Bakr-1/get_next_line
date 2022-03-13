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

size_t	strlength(const char *str)
{
	int	i;

	i = 0;
	while(str++)
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	char	*s;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	str = malloc((strlength(s2) + strlength(s1) + 1));
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

char	*ft_strdup(const char *src)
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

