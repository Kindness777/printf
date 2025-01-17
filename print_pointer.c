/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:40:59 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 18:41:01 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_pointer(unsigned long p)
{
	int count;

	count = 0;
	count += write(1,"0x", 2);
	count += print_hex(p);
	return (count);
}