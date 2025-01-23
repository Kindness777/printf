/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxleroy <maxleroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:09:40 by maxleroy          #+#    #+#             */
/*   Updated: 2025/01/23 11:31:52 by maxleroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str1, ...);
int	ft_strchr(const char *s, int c);
int	print_char(char c);
int	print_digit(int d);
int	print_uns(unsigned int d);
int	print_hex(unsigned long d);
int	print_bhex(unsigned int d);
int	print_str(char *str);
int	print_pointer(unsigned long p);

#endif