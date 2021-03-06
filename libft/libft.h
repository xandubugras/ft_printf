/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubugra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 11:21:03 by adubugra          #+#    #+#             */
/*   Updated: 2018/03/22 17:18:04 by adubugra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

# define FALSE 0
# define TRUE 1
# define LOWER(x) (x >= 97 && x <= 122)
# define UPPER(x) (x >= 65 && x <= 90)
# define NUMBER(x) (x >= 48 && x <= 57)
# define WHITESPACE(x) (x == '\n' || x == ' ' || x == '\t' || x == '\r')
# define BUFF_SIZE 4096
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_gnl
{
	char		*buf;
	int			count;
	int			i;
	int			nl;
	int			fd;
}				t_gnl;

void			ft_swap(int *i1, int *i2);

void			ft_mod(int *i1);

void			ft_putwstr(wchar_t *str, int n);

void			ft_putwchar(wchar_t c);

wchar_t			*ft_wstrndup(const wchar_t *s1, size_t n);

wchar_t			*ft_wstrdup(const wchar_t *s1);

size_t			ft_wstrlen(const wchar_t *s);

char			*ft_find_number(char *str);

char			*ft_itoa_base(int value, int base);

char			*ft_ltoa_base(long long value, int base);

char			*ft_ultoa_base(unsigned long long value, int base);

char			*ft_uitoa_base(unsigned int value, int base);

char			*maxint(int base);

char			*minint(int base);

int				ft_return_mod(int i);

char			*ft_strupper(char *str);

int				get_next_line(int const fd, char **line);

char			*ft_strmerge(char *a, char *b);

char			*ft_strinsert(char **src, char *str, int location);

char			*ft_strinsert_char(char **src, char str, int location);

char			*ft_strremove_char(char **src, int location);

char			*ft_strinsert_sub(char **src, char *str, int location);

int				ft_atoi(const char *str);

size_t			ft_strlen(const char *s);

char			*ft_strcpy(char *dst, const char *src);

char			*ft_strncpy(char *dst, const char *src, size_t len);

wchar_t			*ft_wstrncpy(wchar_t *dst, const wchar_t *src, size_t len);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				ft_strcmp(const char *s1, const char *s2);

char			*ft_strcat(char *s1, const char *s2);

char			*ft_strncat(char *s1, const char *s2, size_t n);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strndup(const char *s1, size_t n);

char			*ft_strdup(const char *s1);

char			*ft_strstr(const char *haystack, const char *needle);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isdigit_sign(int c);

int				ft_isalnum(int c);

int				ft_tolower(int c);

int				ft_toupper(int c);

int				ft_isprint(int c);

int				ft_isascii(int c);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);

void			*ft_memset(void *b, int c, size_t len);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *restrict dst,
					const void *restrict src, size_t n);

void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

void			*ft_memmove(void *dst, const void *src, size_t len);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			*ft_memalloc(size_t size);

void			ft_memdel(void **ap);

char			*ft_strnew(size_t size);

void			ft_strdel(char **as);

void			ft_strclr(char *s);

void			ft_striter(char *s, void (*f)(char *));

void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strmap(char const *s, char (*f)(char));

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_strequ(char const *s1, char const *s2);

int				ft_strnequ(char const *s1, char const *s2, size_t n);

char			*ft_strsub(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s);

char			**ft_strsplit(char const *s, char c);

char			*ft_itoa(int n);

void			ft_putchar(char c);

void			ft_putstr(char const *s);

void			ft_putendl(char const *s);

void			ft_putchar_fd(char c, int fd);

void			ft_putnbr(int n);

void			ft_putstr_fd(char const *s, int fd);

void			ft_putendl_fd(char const *s, int fd);

void			ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(void const *content, size_t content_size);

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			ft_lstadd(t_list **alst, t_list *new);

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));

int				get_word_len(char const *str, char c);

int				ft_countwords(char const *str, char c);

#endif
