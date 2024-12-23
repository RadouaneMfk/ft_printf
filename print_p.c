/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:59:37 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/27 11:16:21 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(unsigned long x)
{
	int				i;
	char			*str;

	i = 0;
	str = "0123456789abcdef";
	if (x == 0)
	{
		i += print_c('0');
		return (i);
	}
	else if (x >= 16)
		i += print_p(x / 16);
	i += print_c(str[x % 16]);
	return (i);
}
