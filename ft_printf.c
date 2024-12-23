/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:18:10 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/28 20:05:39 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_forward(const char *format, va_list ptr, int i, int j)
{
	if (format[j] == 'c')
		i += print_c(va_arg(ptr, int));
	else if (format[j] == 's')
		i += ft_putstr(va_arg(ptr, char *));
	else if (format[j] == 'd' || format[j] == 'i')
		i += ft_putnbr(va_arg(ptr, int));
	else if (format[j] == 'u')
		i += ft_putnbr_positive(va_arg(ptr, int));
	else if (format[j] == '%')
		i += print_c('%');
	else if (format[j] == 'x')
		i += print_x(va_arg(ptr, int));
	else if (format[j] == 'X')
		i += print_xx(va_arg(ptr, int));
	else if (format[j] == 'p')
		i += write (1, "0x", 2) + print_p(va_arg(ptr, unsigned long));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		len;
	int		j;

	j = 0;
	len = 0;
	va_start(ptr, format);
	if (write(1, NULL, 0) < 0)
		return (-1);
	while (format[j])
	{
		if (format[j] == '%' && format[j + 1])
		{
			len = ft_forward(format, ptr, len, ++j);
		}
		else if (format[j] != '%')
		{
			len++;
			write(1, &format[j], 1);
		}
		j++;
	}
	va_end(ptr);
	return (len);
}
