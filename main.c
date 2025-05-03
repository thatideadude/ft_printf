#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
//	printf("sys-10,20: %-3.3s\n", "there");
//	printf("sys10,20: %3.3s\n", "there");
//	write(1, "cus-10,20: ", 11);
//	ft_putstrn("there", 3, 3, 1);
//	write(1, "\n", 1);
//	write(1, "cus10,20: ", 10);
//	ft_putstrn("there", 3, 3, 0);
//	write(1, "\n", 1);
//	printf("%10c\n", 'a');
//	ft_printf("%10c\n", 'a');
//	ft_putcpad('b', 0, 10);
//	write(1, "\n", 1);	
	printf("%-15.12s\n", "hello world");
	printf("%15.12s\n", "hello world");
	ft_printf("%-12.2s\n", "hello world");
	ft_printf("%12.2s\n", "hello world");
}
