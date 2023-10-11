#include "3-calc.h"
/**
 *main - entry point for calculator
 *@argc: total count of argument should be 4
 *@argv: vactor arguments
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = 0;

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);

	return (0);
}
