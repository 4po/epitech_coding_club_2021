int my_print_digits(void)
{
	int number = 48;

	while(number <= 57) {
		my_putchar(number);
		number += 1;
	}
	return 0;
}