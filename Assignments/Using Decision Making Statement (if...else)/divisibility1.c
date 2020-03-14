/*

Q. Program to check whether it is divisible by 5 and 7.

*/

#include<stdio.h>

void main()
{
	int n;
	printf("Enter any positive number : ");
	scanf("%d", &n);
	if(n%5 == 0 && n%7 == 0)
		printf("%d is divisible by 5 and 7 both\n",n);
	else
		printf("%d is not divisible by 5 and 7 both\n",n);
}

/*	OUTPUT

$ cc divisibility1.c
$ ./a.out
Enter any positive number : 35
35 is divisible by 5 and 7 both

$ ./a.out
Enter any positive number : 32
32 is not divisible by 5 and 7 both

*/

