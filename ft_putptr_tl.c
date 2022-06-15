// dit is ook een bitshifter functie die nibbles uitschrijft via 
// hexadeciamle set voor pointers.
//
//
//

#include "ft_printf.h"

static const int	g_nibble = 4;
static const int	g_addr_bitsize = (sizeof(unsigned long int) * 8) - g_nibble;

void	ft_putptr_tl(unsigned long int ptr, int *total_len)
{
	char				*set;
	int					check_val;
	unsigned long int	temp;
	unsigned long int	ptr_2;

	set = "0123456789abcdef";
	check_val = 0;
	temp = 0;
	ptr_2 = ptr;
	ft_putstr_tl("0x", total_len);
	if (ptr == 0)
		ft_putchar_tl('0', total_len);
	while (ptr_2 != 0)
	{
		temp = ptr >> g_addr_bitsize;
		ptr = ptr << g_nibble;
		if (temp != 0 || (temp == 0 && check_val == 1))
		{
			ft_putchar_tl((set[temp]), total_len);
			check_val = 1;
			ptr_2 = ptr_2 >> g_nibble;
		}
	}
}
