/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:49:57 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/23 11:33:36 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_digit(int d)
{
	int		count;
	char	c;

	count = 0;
	if (d == -2147483648)
		return (write(1, "-2147483648", 11));
	if (d < 0)
	{
		write(1, "-", 1);
		count++;
		d = -d;
	}
	if (d >= 10)
		count += print_digit(d / 10);
	c = d % 10 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
