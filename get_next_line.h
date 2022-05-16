/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:40:05 by lbrianna          #+#    #+#             */
/*   Updated: 2022/05/16 13:17:17 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*ft_readline(int fd, char *remain, char *buffer);
char	*ft_findend(char *str);
char	*ft_strjoin(char *remain, char *buffer);
int		ft_strlen(const char *str);
char	*ft_getline(char *remain);
char	*ft_remainnew(char *remain);
#endif
