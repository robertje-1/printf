// Outputs the character ’c’ to standard output
// increments also the total_len count.
//
//

#include "ft_printf.h"

void	ft_putchar_tl(char c, int *total_len)
{
	write (1, &c, 1);
	*total_len += 1;
}
