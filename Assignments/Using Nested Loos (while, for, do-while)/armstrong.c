/*
Q. Write a program to display all armstrong numbers between 1 to 1000.

*/

#include<stdio.h>

void main()
{
	int n, r, sum, num;
	printf("All armstrong numbers between 1 to 1000 are as below :\n");
	for(n=1; n<=1000; n++)
	{
		sum = 0;
		num = n;
		while(num > 0)
		{
			r = num % 10;
			sum = sum + (r*r*r);
			num = num / 10;
		}
		if(sum == n)
			printf("%d ", n);
	}
}

/**  OUTPUT
$ cc armstrong.c
$ ./a.out
All armstrong numbers between 1 to 1000 are as below :
1 153 370 371 407 

**/
