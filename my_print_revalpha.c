int my_print_revalpha(void)
{
	int letter = 122;

	while(letter >= 97) {
		my_putchar(letter);
		letter -= 1;
	}
	return 0;
}