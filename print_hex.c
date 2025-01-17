/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:45:31 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 15:42:52 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int d)
{
	int count;
	char c;

	count = 0;
	if (d >= 16)
		count += print_hex(d / 16);
	else if (d == 10)
	{
		c = 'a';
		write(1, &c, 1);
		count++;
	}
	else if (d == 11)
	{
		c = 'b';
		write(1, &c, 1);
		count++;
	}
	else if (d == 12)
	{
		c = 'c';
		write(1, &c, 1);
		count++;
	}
	else if (d == 13)
	{
		c = 'd';
		write(1, &c, 1);
		count++;
	}
	else if (d == 14)
	{
		c = 'e';
		write(1, &c, 1);
		count++;
	}
	else if (d == 15)
	{
		c = 'f';
		write(1, &c, 1);
		count++;
	}
	c = d % 16 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}