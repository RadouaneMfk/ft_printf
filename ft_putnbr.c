/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:42:13 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/23 17:05:18 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = nb;
	if (nb < 0)
	{
		count += print_c('-');
		n *= -1;
	}
	if (n < 10)
		count += print_c(n + '0');
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	return (count);
}
