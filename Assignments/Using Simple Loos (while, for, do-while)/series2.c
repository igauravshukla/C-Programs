/*

Q. Program to find the sum of following series upto n term:- x-(3x^4)+(5x^6)-(7x^8).....

*/
 
#include<stdio.h>

void main()
{
	int n, i, sign = 1;
	double sum = 0, p = 1, x;
	printf("Enter the value of n and x : ");
	scanf("%d %lf",&n, &x);
	for(i=1; i<=n; i++)
	{
		p = p * (x*x);
		sum = sum + ((2*i)-1) * p * sign;
		sign = sign * (-1);
	}
	printf("Sum = %.2lf\n", sum);
}

/* OUTPUT

$ cc series2.c
$ ./a.out
Enter the value of n and x : 2 3
Sum =  -234.00

*/

