/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:08:54 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 17:45:21 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int d)
{
	int		count;
	char	c;

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
int	main(void)
{
	print_hex(34);
	return (0);
}
// difference entre %d et %i
// limite du print_digit taille