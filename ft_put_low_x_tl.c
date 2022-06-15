// dit is een bitshifter functie die de nibbles uitschrijft volgens
// hexadecimale set 
//
//

#include "ft_printf.h"

static const int	g_nibble = 4;
static const int	g_addr_bitsize = (sizeof(unsigned int) * 8) - g_nibble;

void	ft_put_low_x_tl(unsigned int nbr, int *total_len)
{
	char			*set;
	int				check_val;
	unsigned int	temp;
	unsigned int	ptr_2;

	set = "0123456789abcdef";
	check_val = 0;
	temp = 0;
	ptr_2 = nbr;
	if (nbr == 0)
		ft_putchar_tl('0', total_len);
	while (ptr_2 != 0)
	{
		temp = nbr >> g_addr_bitsize;
		nbr = nbr << g_nibble;
		if (temp != 0 || (temp == 0 && check_val == 1))
		{
			ft_putchar_tl((set[temp]), total_len);
			check_val = 1;
			ptr_2 = ptr_2 >> g_nibble;
		}
	}
}
