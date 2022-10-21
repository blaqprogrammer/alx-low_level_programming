#include <stdio.h>





int main (void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i < 15; i++)
	{
		printf("%d", i);
	}
		putchar(j);
		putchar('\n');
	}
	return (0);
}
