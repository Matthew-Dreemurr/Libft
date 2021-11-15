/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:47:47 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/15 11:38:44 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*======[ INCLUDE ]======*/

# include <stddef.h>
# include <limits.h>
# ifdef WRA
#  include "wraloc.h"
# endif
/*======[ PROTOTYPE ]======*/

/*=={ scr/ctype }==*/

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

/*=={ src/string }==*/

size_t		ft_strlen(const char *s);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *d, const char *s, size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*strjoin_and_free(char **s1, char const *s2);
size_t		len_chrchr(char *str, char c);
size_t		strlen_protect(const char *s);
void		rev_char_arr(char *str, size_t size);

/*=={ src/stdio }==*/

void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putchar(char c);
void		ft_putstr(char *s);
int			putstr_ret_int(char *s);
int			putchar_ret_int(char c);

/*=={ src/stdlib }==*/

void		*ft_calloc(size_t count, size_t size);
int			ft_atoi(const char *str);

/*=={ src/linklst }==*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **alst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/*=={ src/vector }==*/

# define VEC_EXIT_FAILURE ((void *)0)
# define VEC_EXIT_SUCCESS ((int)1)
# define VEC_BUFFER_SIZE  ((unsigned long)256)

/**
 * @brief s_vector struc to manage the memory of a char array.
 * 
 * @param len      Actual size use in buff.
 * @param max      Actual max size.
 * @param buff     The buffer is alloc whit (VEC_BUFFER_SIZE + 1).
 */
typedef struct s_vector
{
	size_t	len;
	size_t	max;
	char	*buff;
}				t_vector;

char		*vect_init(t_vector *v, size_t size);
char		*vect_resize(t_vector *v, size_t size);
char		*vect_cat(t_vector *v, char *str);
char		*vect_push(t_vector *v, char c);
char		*vect_itoa_cat(int n, t_vector *v);
char		*vect_utoa_cat(unsigned int n, t_vector *v);
char		*vect_uthex_cat(unsigned int n, t_vector *v, int upper);
char		*vect_ultohex_cat(size_t n, t_vector *v, int upper);

#endif