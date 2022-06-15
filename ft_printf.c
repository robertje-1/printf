// my own printf function
//
//
//

#include "ft_printf.h"

void	types_func(va_list valist, char c, int *total_len)
{
	if (c == 'c')
		ft_putchar_tl(va_arg(valist, int), total_len);
	if (c == 's')
		ft_putstr_tl(va_arg(valist, char *), total_len);
	if (c == 'p')
		ft_putptr_tl(va_arg(valist, unsigned long int), total_len);
	if (c == 'd' || c == 'i')
		ft_itoa_tl(va_arg(valist, int), total_len);
	if (c == 'u')
		ft_itoa_tl(va_arg(valist, unsigned int), total_len);
	if (c == 'x')
		ft_put_low_x_tl(va_arg(valist, unsigned int), total_len);
	if (c == 'X')
		ft_put_cap_x_tl(va_arg(valist, unsigned int), total_len);
	if (c == '%')
		ft_putchar_tl('%', total_len);
}

int	ft_printf(const char *string, ...)
{
	va_list	valist;
	int		i;
	int		total_len;

	i = 0;
	total_len = 0;
	va_start(valist, string);
	while (string[i] != 0)
	{
		if (string[i] != '%')
		{
			ft_putchar_tl(string[i], &total_len);
		}
		else
		{
			types_func(valist, string[i + 1], &total_len);
			i++;
		}
		i++;
	}
	va_end(valist);
	return (total_len);
}
