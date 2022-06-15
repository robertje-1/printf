//
//
//
//

#include "ft_printf.h"

char	*ft_putstr_tl(char *str, int *total_len)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr_tl("(null)", total_len));
	while (str[i])
	{
		ft_putchar_tl(str[i], total_len);
		i++;
	}
	return (0);
}
