#include "ft_printf.h"

int	sum(int count, ...)
{
	int		total;
	va_list	args;

	total = 0;
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
int	main(void)
{
	char c = 'a';
	int i = 1;
	i += '0';
	write(1, &i, 1);
	return 0;
}