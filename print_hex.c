/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:45:31 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 19:19:14 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long d)
{
	int count;
	char c;

	count = 0;
	if (d >= 16)
		count += print_hex(d / 16);
	d = d % 16;
	if (d < 10)
		c = d + '0';
	else
		c = d - 10 + 'a';
	write(1, &c, 1);
	count++;
	return (count);
}