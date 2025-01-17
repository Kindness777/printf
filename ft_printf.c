/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:05:55 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 15:48:14 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checktype(va_list args, char id)
{
	int	i;

	i = 0;
	if (id == 'd')
	{
		i += print_digit(va_arg(args, int));
	}
	if (id == 'i')
	{
		i += print_digit(va_arg(args, int));
	}
	if (id == 'u')
	{
		i += print_uns(va_arg(args, unsigned int));
	}
	if (id == 'x')
	{
		i += print_hex(va_arg(args, unsigned int));
	}
	if (id == 'X')
	{
		i += print_hex(va_arg(args, unsigned int));
	}
	if (id == 's')
	{
		i += print_str(va_arg(args, char *str));
	}
	return (i);
}
int	ft_printf(const char *str1, ...)
{
	va_list	args;
	int		i;
	int		j;

	j = 0;
	i = 0;
	va_start(args, str1);
	while (str1[i])
	{
		if (str1[i] == '%')
		{
			if (ft_strchr("diuxXscp", str1[++i]))
				j += checktype(args, str1[i]);
			else
				j += print_char(str1[i]);
		}
		j += print_char(str1[i]);
		i++;
	}
	va_end(args);
	return (j);
}
int	main(void)
{
	ft_printf("wsh il faut %x repas par jour\n", 34);
}