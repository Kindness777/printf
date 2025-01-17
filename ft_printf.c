/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:05:55 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/17 20:03:23 by maxleroy         ###   ########.fr       */
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
		i += print_hex(va_arg(args, unsigned long));
	}
	if (id == 'X')
	{
		i += print_Bhex(va_arg(args, unsigned int));
	}
	if (id == 's')
	{
		i += print_str(va_arg(args, char *));
	}
	if (id == 'c')
	{
		i += print_char(va_arg(args, int));
	}
	if (id == 'p')
	{
		i += print_pointer(va_arg(args, unsigned long));
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
			if (str1[++i] == '%')
				j += write(1, &str1[i], 1);
			else if (ft_strchr("diuxXscp", str1[i]))
				j += checktype(args, str1[i]);
			else
			{
				j += write(1,
						"error: unknown conversion type characte  in format",
						50);
				return (0);
			}
		}
		else
			j += print_char(str1[i]);
		i++;
	}
	va_end(args);
	return (j);
}
int	main(void)
{
	int i = 2;
	ft_printf("let's test1: %i\n", i);
	printf("let's test2: %i\n", i);
	ft_printf("let's test1: %d\n", i);
	printf("let's test2: %d\n", i);
	ft_printf("let's test1: %u\n", 2147483647);
	printf("let's test2: %u\n", 2147483647);
	ft_printf("let's test1: %x\n", 359);
	printf("let's test2: %x\n", 359);
	ft_printf("let's test1: %X\n", 10001);
	printf("let's test2: %X\n", 10001);
	ft_printf("let's test1: %s\n", "wsh bien ?");
	printf("let's test2: %s\n", "wsh bien ?");
	ft_printf("let's test1: %c\n", 'c');
	printf("let's test2: %c\n", 'c');
	ft_printf("let's test1: %p\n", &i);
	printf("let's test2: %p\n", &i);
}