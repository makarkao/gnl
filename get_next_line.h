/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarkao <makarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:10:12 by makarkao          #+#    #+#             */
/*   Updated: 2024/12/09 22:42:33 by makarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# elif BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif
typedef struct s_gnlsv
{
	ssize_t	k;
	char	s[BUFFER_SIZE + 1];
}			t_gnlsv;

typedef struct s_gnlnsv
{
	ssize_t	j;
	ssize_t	i;
	char	*l;
}			t_gnlnsv;

char		*get_next_line(int fd);
char		*ft_strcpy(char *str, char *s);
size_t		ft_strlen(char *str);
size_t		ft_strchr(char *str, ssize_t *j, char c);
char		*ft_sub(char *str, char *s, ssize_t *k, size_t size2);

#endif