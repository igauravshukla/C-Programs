/*

Q. Write a function power() which calculate x^y. Write another function which calculates n! without using standard library
function. use these functions to calculate sum of 'n' terms following Taylor's series.
sin(x)=x-(x^3)/3! + (x^5)/5! +......

*/
 
#include<stdio.h>

long power(int x,int y)
{
	long p = 1;
	int i;
	for(i=1; i<=y; i++)
	{
		p = p * x;
	}
	return p;
}

long factorial(int n)
{
	long f = 1;
	int i;
	for(i=1; i<=n; i++)
	{
		f = f * i;  
	}
	return f;
}

void main()
{
	int i, n, sign = 1, x;
	long p, f;
	double sum = 0;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf("Enter the value of x : ");
	scanf("%d", &x);
	for(i=1; i<=n; i++)
	{
		p = power(x,(2*i)-1);
		f = factorial((2*i)-1);
		sum = sum + ((float) p / f) * sign; 
		sign = sign*(-1);
	}
	printf("Sum = %.2lf\n", sum);
}

/**	OUTPUT

$ cc taylor_series1.c
$ ./a.out
Enter the value of n : 3
Enter the value of x : 2
Sum = 0.93

**/

