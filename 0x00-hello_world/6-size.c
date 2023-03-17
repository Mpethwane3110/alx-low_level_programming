#include <stdio.h>
/**
  * main - print the size of various types on the computer
  *
  * Return: always return 0
  */
int main(void)
{
	printf("Size of a char:%zu byte(s)\n", sizeof(char));
	printf("Size of int:%zu byte(s)\n", sizeof(int));
	printf("size of a long int:%zu byte(s)\n", sizeof(long int));
	printf("size of a long long int:%zu byte(s)\n", sizeof(long long int));
	printf("size of a float:%zu byte(s)\n", sizeof(float));
	return (0);
}
