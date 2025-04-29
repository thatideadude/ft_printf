#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	//ft_printf("hello");
	char c = 'a';
	void *ptr = &c;
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
}
