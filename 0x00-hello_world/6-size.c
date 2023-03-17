#include <stdio.h>
/**
  * main - print the size of various types on the computer
  *
  * Return: always return 0
  */
int main(void)
{
	printf("Size of a car:%lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte (s):, sizeof(float));
	return (0);
}
