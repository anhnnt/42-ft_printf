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

int	ft_print_unsigned_decimal(unsigned int i)
{
	size_t	num;

	num = int_leng(i);
	ft_putnbr_fd(i, 1);
	return (num);
}