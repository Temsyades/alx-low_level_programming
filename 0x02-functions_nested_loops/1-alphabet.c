#include 'main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints alphabets
 * Return: void
 */

 void print_alphabets(void)
 {
	 char sa;

	sa = 'a';

	while (sa<= 'z')
	{
		_putchar(sa);
		sa++;
	}

	_putchar('\n');
 }
