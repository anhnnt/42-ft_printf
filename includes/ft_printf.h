/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:14:58 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 18:25:13 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# include "../libft/libft.h"

int	    ft_printf(const char *, ...);
int	    ft_print_char(char c);
int	    ft_print_string(char *str);
int	    ft_print_vpointer(unsigned long long num);
int	    ft_print_integer(int i);
int	    ft_print_unsigned_decimal(unsigned int i);
int 	ft_print_hex(unsigned int i, char ch);
int	    ft_print_percentage();

size_t	int_leng(long nb);

#endif