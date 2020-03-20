/*

Q. Program to check whether the given number n is perfect or not.

*/
 
#include<stdio.h>

void main()
{
	int i, n, sum=0;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	for(i=1; i<n; i++)
	{
		if(n%i == 0)
			sum = sum + i;
	}
	if(sum == n)
		printf("%d is a perfect number\n",n);
	else
		printf("%d is not a perfect number\n",n);
}

/*	OUTPUT

$ cc perfect.c
$ ./a.out
Enter the value of n : 6
6 is a perfect number

$ ./a.out
Enter the value of n : 496
496 is a perfect number

$ ./a.out
Enter the value of n : 4
4 is not a perfect number
 
*/

