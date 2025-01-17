/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:33:27 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 13:35:57 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_uns(unsigned int d)
{
	int count;
	char c;

	count = 0;
	if (d >= 10)
		count += print_digit(d / 10);
	c = d % 10 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}