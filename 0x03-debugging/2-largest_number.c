#include "main.h"


/**
 *
 *largest_number - returns the largest of 3 numbers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * @c: third integer
 *
 * Return: largest number
 *
 */



int largest_number(int a, int b, int c)
{
	int largest;
	for (a = 'a'; a <= 'z';)
	{
		for (b = 'A' ;  b <= 'Z')
		{

	
	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
		}
	}
	return (largest);
}


