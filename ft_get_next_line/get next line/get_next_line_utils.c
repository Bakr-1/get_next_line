/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:41:32 by aalseri           #+#    #+#             */
/*   Updated: 2022/03/27 21:28:37 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	if (*str == 0)
		return (0);
	return (ft_strlen(str + 1) + 1);
}

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		k;

	k = -1;
	i = -1;
	if (!s1)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}
	str = malloc((ft_strlen(s2) + ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++k])
		str[i++] = s2[k];
	str[i] = '\0';
	ft_free(&s1);
	return (str);
}

char	*ft_strnl(char *s)
{
	if (!s)
		return (NULL);
	while (*s++ != '\n')
		if (*s == '\0')
			return (0);
	return (s);
}

char	*extra_read(char *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
		return (ft_free(&s));
	str = malloc((ft_strlen(s) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	ft_free(&s);
	return (str);
}
