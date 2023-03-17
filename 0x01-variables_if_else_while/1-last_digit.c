#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
   * main -program will assign a random number to the variable n each time
   *Return: always 0
   */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANDMAX / 2;
	/*your code goes there*/
	if (n > 0)
		printf(" %d is positive", n);
	else if (n == 0)
		printf(" %d is zero", n);
	else
		printf(%d is negative", n);

	return (0;)
}

