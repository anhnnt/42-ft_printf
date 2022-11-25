/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:52:03 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 18:35:13 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_print_integer(int num)
{
	size_t	len;

	len = int_leng(num);
	ft_putnbr_fd(num, 1);
	return (len);
}