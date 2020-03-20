/*

Q. Program to check whether the given number n is prime or not.

*/
 
#include<stdio.h>

void main()
{
	int i, n, cnt=0;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(n%i == 0)
			cnt++;
	}
	if(cnt == 2)
		printf("%d is a prime number\n", n);
	else
		printf("%d is not a prime number\n", n);
}

/*	OUTPUT

$ cc prime.c
$ ./a.out
Enter the value of n : 6
6 is not a prime number

$ ./a.out
Enter the value of n : 11
11 is a prime number

*/
