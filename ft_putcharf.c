#include <unistd.h>
#include "ft_printf.h"

int	ft_putcharf(char c)
{
	write(1, &c, 1);
	return (1);
}
