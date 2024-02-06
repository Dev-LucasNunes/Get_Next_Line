/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n <lgomes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:29:33 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/06/15 22:50:44 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char    *str;
    size_t            i;
    size_t            total;

    str = NULL;
    total = size * nmemb;
    if (total != 0 && total / size != nmemb)
        return (NULL);
    str = (unsigned char *)malloc(total * sizeof(unsigned char));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (i < (total))
    {
        str[i] = '\0';
        i++;
    }
    return ((void *)str);
}


char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}	
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		result[j++] = s2[i++];
	}
	result[j] = '\0';
	return (result);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include "get_next_line.h"

// size_t	ft_strlen(char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (s[count] != '\0')
// 		count++;
// 	return (count);
// }

// char	*ft_strjoin(char *next_lines, char *temp)
// {
// 	char	*dest;
// 	size_t	next_lines_len;
// 	size_t	temp_len;
// 	int		count;

// 	if (next_lines == NULL)
// 	{
// 		next_lines = malloc(1 * sizeof(char));
// 		next_lines[0] = '\0';
// 	}
// 	next_lines_len = ft_strlen(next_lines);
// 	temp_len = ft_strlen(temp);
// 	dest = malloc((next_lines_len + temp_len + 1) * sizeof(char));
// 	if (dest == NULL)
// 		return (NULL);
// 	count = -1;
// 	while (next_lines[++count] != '\0')
// 		dest[count] = next_lines[count];
// 	count = -1;
// 	while (temp[++count] != '\0')
// 		dest[count + next_lines_len] = temp[count];
// 	dest[count + next_lines_len] = '\0';
// 	free(next_lines);
// 	return (dest);
// }

// char	*ft_strchr(char *s, int c)
// {
// 	int		count;

// 	if (s == NULL)
// 		return (NULL);
// 	count = -1;
// 	while (s[++count] != '\0')
// 		if (s[count] == (char)c)
// 			return (&s[count]);
// 	if ((char)c == '\0')
// 		return (&s[count]);
// 	return (NULL);
// }