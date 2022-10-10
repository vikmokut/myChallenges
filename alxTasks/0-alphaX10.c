#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets in small letters 10 times
 *
 * Return: Always 0
 */
void alphaX10(void);

int main(void)
{
	alphaX10();
	return (0);
}

void alphaX10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch != 'z'; ch++)
		{
			putchar(ch);
		}
		i++;
		putchar('\n');
	}
}
