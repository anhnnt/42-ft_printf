/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:07:25 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 18:35:38 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putnbr_uint(unsigned int n)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar_fd(n + 48, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putnbr_fd(n % 10, 1);
	}
}

int	ft_print_unsigned_decimal(long long n)
{
	unsigned int	num;
	int				leng;

	num = (unsigned int)(n);
	leng = int_leng(num);
	ft_putnbr_uint(num);
	return (leng);
}
