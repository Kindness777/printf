/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:40:59 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/23 11:34:18 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long p)
{
	int	count;

	count = 0;
	if (p == 0)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += print_hex(p);
	return (count);
}
