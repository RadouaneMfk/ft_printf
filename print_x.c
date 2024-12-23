/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:12:25 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/24 10:42:42 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(int x)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = (unsigned int)x;
	if (n == 0)
		i += print_c('0');
	else if (n >= 16)
	{
		i += print_x(n / 16);
		i += print_x(n % 16);
	}
	else if (n <= 9)
	{
		i += print_c(n + '0');
	}
	else
	{
		i += print_c(n + 'a' - 10);
	}
	return (i);
}
