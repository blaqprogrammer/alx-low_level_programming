#include <stdio.h>

/**
 * main- The power house of the code
 *
 * Return: Return a - z in lower case.
 */

int main(void)
{
	char aZ;

	for (aZ = 'a'; aZ <= 'z'; aZ++)
	{
		if (aZ != 'q' && aZ != 'e')
		{
			putchar(aZ);
		}
	}
	putchar('\n');

	return (0);
}
