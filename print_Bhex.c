/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_Bhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:44:50 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 15:45:18 by maxleroy         ###   ########.fr       */
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
		c = 'A';
		write(1, &c, 1);
		count++;
	}
	else if (d == 11)
	{
		c = 'B';
		write(1, &c, 1);
		count++;
	}
	else if (d == 12)
	{
		c = 'C';
		write(1, &c, 1);
		count++;
	}
	else if (d == 13)
	{
		c = 'D';
		write(1, &c, 1);
		count++;
	}
	else if (d == 14)
	{
		c = 'E';
		write(1, &c, 1);
		count++;
	}
	else if (d == 15)
	{
		c = 'F';
		write(1, &c, 1);
		count++;
	}
	c = d % 16 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}