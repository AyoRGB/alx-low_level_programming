#include <stdio.h>

/**
 * main - prints the alphabet in lower case omitting q and e,
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; (ch <= 'z'; != 'q'; != 'e'); ch++)
{
	putchar (ch);
}
	putchar('\n');
	return (0);
}
