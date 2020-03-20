/*

Q. Program to find the reverse number of a given number.

*/
 
#include<stdio.h>

void main()
{
	int n, rev=0;
	printf("Enter the number : ");
	scanf("%d", &n);
	while(n > 0)
	{
		rev = rev * 10 + (n%10);
		n = n / 10;
	}
	printf("Reverse number is %d\n", rev);
}

/*	OUTPUT

$ cc reverse.c
$ ./a.out
Enter the number : 123
Reverse number is 321 

*/

