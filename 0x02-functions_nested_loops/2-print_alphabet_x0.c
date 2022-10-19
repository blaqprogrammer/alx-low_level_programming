#include <stdio.h>

/**
 * main- runs the code
 *
 * Return:
 */

int main (void)
{

	char az;
	int i;
	
	for (i = 0; i <  10; i++)
	{
	for (az = 'a'; az < 'z'; az++)
	{

		putchar(az);
		
	}
		putchar(i);
		putchar('\n');
	}
}
