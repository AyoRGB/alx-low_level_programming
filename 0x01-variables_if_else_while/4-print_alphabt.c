#include <stdio.h>

/**
 * main - prints the alphabet in lower case omitting q and e,
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
		char++;
	}
	putchar('\n');
	return (0);
}
