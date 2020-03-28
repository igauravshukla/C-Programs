/*

Q. Write a function power() which calculate x^y. write another function which calculate n! without using standard library
function. Use these functions to calculate sum of 'n' terms following taylor's series.
sin(x)=1+x+(x^2)/2!+(x^3)/3! +......

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
	int i, n, x;
	double sum = 0;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf("Enter the value of x : ");
	scanf("%d", &x);
	for(i=0; i<n; i++)
	{
		sum = sum + ((double)power(x,i)/factorial(i));
	}
	printf("Sum = %.2lf\n", sum);
}

/**	OUTPUT

$ cc taylor_series3.c
$ ./a.out
Enter the value of n : 4
Enter the value of x : 2
Sum = 6.33

**/

