#include "3-calc.h"
/**
 * main - program
 * @x: number of arguments
 * @y: number of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int num1, num2, r;
	char p;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	p = *argv[2];

	if ((p == '/' || p == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = f(num1, num2);
	printf("%d\n", r);

	return (0);
}
