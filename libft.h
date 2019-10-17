/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktautuaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 09:54:18 by ktautuaa          #+#    #+#             */
/*   Updated: 2019/10/17 13:15:53 by ktautuaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_printcolor(char *msg, char *color);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_memdel(void	**ap);
void				ft_strdel(char	**aa);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putnbr(int n);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_bzero(void *b, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, void *src, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_iswhitespace(char c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_atoi(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_islower(char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strnew(size_t size);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *h, const char *n, size_t len);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcat(char *restrict s1, const char *restrict s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strdup(const char *s1);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);
size_t				ft_get_strlen(int n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(char const *s);
size_t				ft_count_words(char const *s, char delm);
size_t				ft_count_wordlen(char const *s, char delm);

#endif
