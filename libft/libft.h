#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 5000
# endif

# ifndef OPEN_MAX
# define OPEN_MAX 32
# endif

typedef struct	s_list
{
	void	*content;
	struct	s_list	*next;
}	t_list;