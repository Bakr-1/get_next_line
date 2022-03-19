

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strnl(char *s);
char	*get_read(int fd, char *s);
char	*get_next_line(int fd);
char	*stringdup(char *s);
char	*get_str(char *s);
size_t	ft_strlen(char *s);
char	*ft_free(char *s);

#endif
