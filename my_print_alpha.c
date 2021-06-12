int my_print_alpha(void)
{
	int letter = 97;

	while(letter <= 122) {
		my_putchar(letter);
		letter += 1;
	}
	return 0;
}