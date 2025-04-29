#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	ft_putnbruf(unsigned int nb)
{
	int count;

	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		count += ft_putnbruf(nb / 10);
	return (count + ft_putcharf(nb % 10 + '0'));
}
