/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:24:12 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 18:36:02 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_handle(va_list vl, char ch)
{
	int	num;

	num = 0;
	if (ch == 'c')
		num += ft_print_char(va_arg(vl, int));
	else if (ch == 's')
		num += ft_print_string(va_arg(vl, char *));
	else if (ch == 'p')
		num += ft_print_vpointer(va_arg(vl, unsigned long long));
	else if (ch == 'd' || ch == 'i')
		num += ft_print_integer(va_arg(vl, int));
	else if (ch == 'u')
		num += ft_print_unsigned_decimal(va_arg(vl, unsigned int));
	else if (ch == 'x' || ch == 'X')
		num += ft_print_hex(va_arg(vl, unsigned int), ch);
	else if (ch == '%')
		num += ft_print_percentage();
	return (num);
}

int	ft_printf(const char *string, ...)
{
	va_list	vl;
	int		i;
	int		count;
	
	va_start (vl, string);
	count = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			count += ft_handle(vl, string[i + 1]);
			i++;
		}
		else
			count += ft_print_char(string[i]);
		i++;
	}
	va_end (vl);
	return (count);
}
/*
#include <stdio.h>
int	main()
{
	char *string;
	int a;
	int *p = &a;
	string = "LOOOOOOOOOOO";
	int ft_count = ft_printf("FT_Printing: %c, %d, %s, %p, %%, %x, %X\n", 'a', -234, "Hello", (void *)&string, 522278, 522278);
	int count = printf("OR_Printing: %c, %d, %s, %p, %%, %x, %X\n", 'a', -234, "Hello", (void *)&string, 522278, 522278);
	printf("Printf: %d\n", count);
	ft_printf("FT_Printf: %d\n", ft_count);
	return (0);
}
*/