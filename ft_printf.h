/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:55:40 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/24 10:52:51 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_c(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_putnbr_positive(int nb);
int	print_x(int x);
int	print_xx(int x);
int	print_p(unsigned long x);
#endif