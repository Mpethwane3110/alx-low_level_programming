#include <stdio.h>
/**
  * main - print the size of various types on the computer
  *
  * Return: always return 0
  */
int main(void)
{
	printf("Size of a car:%zu\n", sizeof(char));
	printf("Size of int:%zu\n", sizeof(int));
	printf("size of a long int:%zu\n", sizeof(long int));
	printf("size of a long long int:%zu\n", sizeof(long long int));
	printf("size of a float:%zu\n", sizeof(float));
	return (0);
}
