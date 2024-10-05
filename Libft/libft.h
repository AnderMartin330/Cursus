/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:17:31 by andemart          #+#    #+#             */
/*   Updated: 2024/09/20 14:17:31 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nitems, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(char *str);
int				ft_isascii(int i);
int				ft_isdigit(int arg);
int				ft_isprint(int i);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *d, void *src, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char const *str, int fd);
char			*ft_strchr(const char *str, int c);
size_t			strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_strlen(char *str);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strrchr(const char *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strdup(char *src);
char			*ft_strtrim(char const *s1, char const *set);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
static size_t	get_digits(int n);
static size_t	ft_countword(char const *s, char c);
#endif