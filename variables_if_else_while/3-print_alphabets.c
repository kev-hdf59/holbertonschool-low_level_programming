#include <stdio.h>

/**
 * main - that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z');
	putchar(letter);
	
	for (letter = 'A'; letter <= 'z');
	putchar(letter);

	putchar('\n');

	return (0);
}
