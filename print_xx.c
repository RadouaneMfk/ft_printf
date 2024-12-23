/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_XX.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:24:21 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/23 17:05:34 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_xx(int x)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = (unsigned int)x;
	if (n == 0)
		i += print_c('0');
	else if (n >= 16)
	{
		i += print_xx(n / 16);
		i += print_xx(n % 16);
	}
	else if (n <= 9)
	{
		i += print_c(n + '0');
	}
	else
	{
		i += print_c(n + 'A' - 10);
	}
	return (i);
}
