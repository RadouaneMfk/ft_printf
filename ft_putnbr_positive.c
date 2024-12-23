/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_positive.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:34:05 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/23 17:05:14 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_positive(int nb)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = nb;
	if (n >= 0)
	{
		if (n < 10)
			count += print_c(n + '0');
		else
		{
			count += ft_putnbr(n / 10);
			count += ft_putnbr(n % 10);
		}
	}
	return (count);
}
