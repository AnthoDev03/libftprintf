#include "../includes/ft_printf.h"

int ft_printstr(char *format)
{
	int  i;

	i = 0;
	if (format == NULL)
	{
		ft_putstr_fd("(null)", 6);
		return (6);
	}

	while (format[i])
	{
		ft_putchar_fd(format[i], 1);
		i++;
	}
	return (i);
}
int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
