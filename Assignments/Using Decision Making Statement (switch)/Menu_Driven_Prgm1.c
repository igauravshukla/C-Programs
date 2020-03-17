/*

Q. Program to perform arithmetic operation and display the result.

*/

#include<stdio.h>

void main()
{
	int a, b;
	float res;
	char opr;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	printf("Enter operator(+ or - or * or % or /) : ");
	scanf(" %c", &opr);
	switch(opr)
	{
		case '+' :	res = a + b;
					printf("Addition = %.2f\n", res);
					break;

		case '-' :	res = a - b;
					printf("Subtraction = %.2f\n", res);
					break;

		case '*' :	res = a * b;
					printf("Multiplication = %.2f\n", res);
					break;
		case '%' :	res = a % b;
					printf("Remainder = %.2f\n", res);
					break;

		case '/' :	res = a / b;
					printf("Division = %.2f\n", res);
					break;

		default  :	printf("Invalid Operator");
	}
}

/*	OUTPUT

$ cc Menu_Driven_Prgm1.c
$ ./a.out
Enter two numbers : 2 4
Enter operator(+ or - or * or 12177410r /) : +
Addition = 6.00

$ ./a.out
Enter two numbers : 2 4
Enter operator(+ or - or * or 12177410r /) : -
Subtraction = -2.00

$ ./a.out
Enter two numbers : 2 4
Enter operator(+ or - or * or 12177410r /) : *
Multiplication = 8.00

$ ./a.out
Enter two numbers : 2 4
Enter operator(+ or - or * or 12177410r /) : /
DIvision = 0.00*

$ ./a.out
Enter two numbers : 4 2
Enter operator(+ or - or * or 12177410r /) : /
Division = 2.00

$ ./a.out
Enter two numbers : 2 4
Enter operator(+ or - or * or 12177410r /) : %
Modulus = 2.00

$ ./a.out
Enter two numbers : 2 4
Enter operator(+ or - or * or 12177410r /) : &
Invalid Operator

*/
