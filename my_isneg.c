#include <unistd.h>

int my_putchar(char c)
{
	write(1, &c, 1);
}

int my_isneg(int a)
{
	if(a <= 0) {
		my_putchar('N');
	}else{
		my_putchar('P');
	}
	return 0;
}
