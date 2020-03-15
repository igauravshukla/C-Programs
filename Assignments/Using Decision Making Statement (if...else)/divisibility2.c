/*

Q. Program to check whether it is divisible by 5 or 7.

*/

#include<stdio.h>

void main()
{
	int n;
	printf("Enter any positive number : ");
	scanf("%d", &n);
	if(n%5 == 0 || n%7 == 0)
		printf("%d is divisible by 5 or 7\n",n);
	else
		printf("%d is not divisible by 5 or 7\n",n);
}

/*	OUTPUT

$ cc divisibility2.c
$ ./a.out
Enter any positive number : 30
30 is divisible by 5 or 7

$ ./a.out
Enter any positive number : 35
35 is divisible by 5 or 7

$ ./a.out
Enter any positive number : 32
32 is not divisible by 5 or 7


*/

