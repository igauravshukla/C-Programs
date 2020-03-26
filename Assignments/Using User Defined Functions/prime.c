/*

Q. Write a function isPrime() which check wheather the number is prime or not. If it is prime, it returns 1, otherwise 0. Use
this function to find first 10 prime numbers.

*/

#include<stdio.h>

int isPrime(int n)
{
	int i;
	for(i=2; i<n; i++)
	{
		if(n%i == 0)
			break;
	}
	if(i == n)
		return 1;
	else
		return 0;
}

void main()
{
	int i = 1, n = 2;
	printf("First 10 prime numbers are : ");
 	while(i <= 10)
	{
		if(isPrime(n))
		{
			printf("%d ", n);
			i++;
		}
		n++;
	}
}

/**	OUTPUT

$ cc prime.c
$ ./a.out
First 10 prime numbers are : 2 3 5 7 11 13 17 19 23 29

**/

