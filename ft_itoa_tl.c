// deze functie zet integers om in ascii en dat word uitgeschreven met 
// ft_putchar functie en de count word ook bijgehouden
//
//

#include "stdio.h"
#include "stdlib.h"
#include "ft_printf.h"

void	itoa_sign_count(long long int *n, int *i)
{
	long long int	n_copy;

	if (*n < 0)
	{
		*n = -1 * (*n);
		(*i)++;
	}
	n_copy = *n;
	while (n_copy)
	{
		n_copy = (n_copy / 10);
		(*i)++;
	}
}

void	ft_itoa_tl(long long int n, int *total_len)
{
	int		i;
	char	*string;
	int		pos;

	i = 0;
	pos = 0;
	itoa_sign_count(&n, &i);
	string = (char *)malloc((i + 1) * sizeof(char));
	if (n == 0)
		ft_putstr_tl("0", total_len);
	string[i] = '\0';
	while (n)
	{
		string[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (i-- != 0)
		string[i] = '-';
	while (string[pos])
	{
		ft_putchar_tl((string[pos]), total_len);
		pos++;
	}
	free(string);
}
