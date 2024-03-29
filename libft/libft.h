/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes/libft.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:40:15 by danli             #+#    #+#             */
/*   Updated: 2019/10/10 08:34:09 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

void					*ft_memset(void *ptr, int x, size_t n);
void					ft_bzero(void *ptr, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memccpy(void *dest, const void *src,\
						int c, size_t n);
void					*ft_memchr(const void *str, int c, size_t n);
char					*ft_itoa(int n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
size_t					ft_strlen(char *str);
char					*ft_strdup(const char *src);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, char *src, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t n);
char					*ft_strcat(char *dest, const char *src);
char					*ft_strncat(char *dst, const char *src, size_t n);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *hstk, const char *ndl);
char					*ft_strnstr(const char *hstk, \
						const char *ndl, size_t len);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_atoi(const char *str);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalpha(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);
int						ft_countwords(char *s, char c);
int						ft_numdigits(long n, int base);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_putnbr_fd(int n, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putchar_fd(char c, int fd);
void					ft_putnbr(int n);
void					ft_putendl(char const *s);
void					ft_putchar(char c);
void					ft_putstr(char *str);
char					**ft_strsplit(char const *s, char c);
char					*ft_strtrim(char const *s);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strsub(char const *s, \
						unsigned int start, size_t len);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
int						ft_strequ(char const*s1, char const *s2);
char					*ft_strmapi(char const *s, \
						char(*f)(unsigned int, char));
char					*ft_strmap(char const *s, char (*f)(char));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
void					ft_striter(char *s, void (*f)(char *));
t_list					*ft_lstnew(void const *content, size_t content_size);
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void					ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void					ft_lstdel(t_list **alst, void(*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
char					*ft_strndup(char *s2, size_t len);
int						ft_isspace(char c);
char					**ft_strsplitchrset(char *str, const char *charset);
int						ft_atoi_base(char *str, char *base);

#endif
