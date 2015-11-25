/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:38:31 by agrele            #+#    #+#             */
/*   Updated: 2015/11/25 16:50:41 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# define TRUE 1
# define FALSE 0

/* idiot 
# define HEADER "../libft.h"
*/

/* NORMINETTE OK */

/* PUT */
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);

/* IS */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* STR */

/* NEW */
int		ft_strlen(const char *s);
char	*ft_strcpy(char *restrict dst, const char *restrict src);

#endif 
