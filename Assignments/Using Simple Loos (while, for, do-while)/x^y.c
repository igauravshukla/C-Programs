/*

Q. Program to find the value of x^y.

*/
 
#include<stdio.h>

void main()
{
	int i, x, y, p=1;
	printf("Enter the value of x & y: ");
	scanf("%d %d", &x, &y);
	for(i=1; i<=y; i++)
	{
		p = p * x;
	}
	printf("%d raised to %d = %d\n", x, y, p);
}

/*	OUTPUT

$ cc x^y.c
$ ./a.out
Enter the value of x & y : 2 3
2 raised to 3 = 8

*/
