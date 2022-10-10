#include <stdio.h>
#include <stdlib.h>

int _islower(int c);

int main(void)
{
	int r;
	r = _islower('K');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

int _islower(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}

	}
	return (0);
}
