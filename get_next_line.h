/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n <lgomes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:32:45 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/06/20 13:04:35 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 6
# endif

char    *get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char    *store_memory(char *memory);
char    *ft_get_line(char *memory);
char    *join_and_free(char *memory, char *buffer);
char    *read_line_break(int fd, char *memory);
void    *ft_calloc(size_t nmemb, size_t size);

#endif

// #ifndef GET_NEXT_LINE_H
// # define GET_NEXT_LINE_H

// # include <stdlib.h>
// # include <unistd.h>

// # ifndef BUFFER_SIZE
// #  define BUFFER_SIZE 42
// # endif

// char	*get_next_line(int fd);
// size_t	ft_strlen(char *s);
// char	*ft_strjoin(char *s1, char *s2);
// char	*ft_strchr(char *s, int c);

// #endif