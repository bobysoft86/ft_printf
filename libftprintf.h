/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:59:37 by roberodr          #+#    #+#             */
/*   Updated: 2023/02/04 13:31:26 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putchar(int c);
int ft_printelection(char entrada, va_list args);
int ft_printf(char const *entrada, ...);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *c);
int	ft_putstr(char *s);
int ft_printbase(int nbr);
int	ft_putnbr_fd(int n, int fd);
int	ft_putchar_fd(char c, int fd);
int	ft_printunsigned( unsigned int nbr);
#endif

