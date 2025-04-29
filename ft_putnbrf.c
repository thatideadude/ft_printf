#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	ft_putnbrf(int nb)
{
	int count;

	count = (nb < 0);
	if (nb == INT_MIN)
		return (ft_putstrf("-2147483648"));
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		count += ft_putnbrf(nb / 10);
	return (count + ft_putcharf(nb % 10 + '0'));
}
