#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *string, ...);
void	ft_putchar_tl(char c, int *total_len);
char	*ft_putstr_tl(char *str, int *total_len);
void	ft_putptr_tl(unsigned long int ptr, int *total_len);
void	ft_itoa_tl(long long int n, int *total_len);
void	ft_put_cap_x_tl(unsigned int nbr, int *total_len);
void	ft_put_low_x_tl(unsigned int nbr, int *total_len);

#endif
