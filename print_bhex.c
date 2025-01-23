/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:44:50 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/23 11:35:50 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_bhex(unsigned int d)
{
	int		count;
	char	c;

	count = 0;
	if (d >= 16)
		count += print_bhex(d / 16);
	d = d % 16;
	if (d < 10)
		c = d + '0';
	else
		c = d - 10 + 'A';
	write(1, &c, 1);
	count++;
	return (count);
}
