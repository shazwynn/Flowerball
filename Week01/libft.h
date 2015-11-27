/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:38:31 by agrele            #+#    #+#             */
/*   Updated: 2015/11/26 19:01:39 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0

/* REMOVE ALL RESTRICT */ 

/* NORMINETTE OK */

/* IS --- ALL OK ---*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* -------- PUT -------- */
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);

/* -------- STR -------- */

/* --- OK --- */
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);

/* --- KO --- */
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

/* --- Untested --- */
void	ft_strclr(char *s);

/* --------- EXTRA -------- */
int		ft_ispos(int n);
int		ft_isneg(int n);
char	*ft_putsign(int n);
void	ft_swap(int *a, int *b);

/* -------- NEW --------*/

/* -------- MEM -------- */
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

/* -------- MISSING ~ PART 1 -------- */
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str);

#endif 
