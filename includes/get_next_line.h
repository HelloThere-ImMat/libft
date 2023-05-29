/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:26:53 by mdorr             #+#    #+#             */
/*   Updated: 2023/05/29 11:46:58 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_words
{
	char			*content;
	struct s_words	*next;
}		t_words;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
int		read_and_stash(int fd, t_words **stash);
int		found_newline(t_words *stash);
void	add_to_lst(t_words **stash, char *buf, int counter);
void	generate_line(t_words *stash, char **line);
void	extract_line(t_words *stash, char **line);
void	clean_stash(t_words **stash);
t_words	*ft_lstlast_words(t_words *lst);
void	free_stash(t_words *stash);

#endif
