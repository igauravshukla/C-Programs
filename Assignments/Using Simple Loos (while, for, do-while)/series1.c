/*

Q. Program to find the sum of following series upto n term:- x+(3x^3)+(5x^5)+.....

*/
 
#include<stdio.h>

void main()
{
	int n, i;
	double sum=0, p=1, x;
	printf("Enter the value of n and x : ");
	scanf("%d %lf",&n, &x);
	for(i=1; i<=n; i++)
	{
		if(i == 1)
			p = p * x;
		else
			p = p * (x * x);
		sum = sum + ((2*i)-1)*p;
	}
		printf("Sum = %.2lf\n", sum);
}

/*	OUTPUT

$ cc series1.c
$ ./a.out
Enter the value of n and x: 2 3
Sum = 84.00

*/

