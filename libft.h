/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 00:09:02 by abel-haj          #+#    #+#             */
/*   Updated: 2019/10/25 00:21:15 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <ctype.h>
# include <fcntl.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
char				*ft_itoa(int n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				**ft_split(char const *s, char c);
int					ft_strcountch(const char *s, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strnstr(const char *hay, const char *needl, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strlftrim(char const *s1, char const *set);
char				*ft_strrgtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_putchar(int c);
void				ft_putstr(const char *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_lstprint(t_list *list);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
#endif
