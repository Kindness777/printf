/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_Bhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:44:50 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 18:13:33 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_Bhex(unsigned int d)
{
	int count;
	char c;

	count = 0;
	if (d >= 16)
		count += print_Bhex(d / 16);
	d = d % 16;
	if (d < 10)
		c = d + '0';
	else
		c = d - 10 + 'A';
	write(1, &c, 1);
	count++;
	return (count);
}