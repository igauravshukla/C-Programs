/*

Q. Program to check wheather number is even or odd.

*/
  
#include<stdio.h>

void main()
{
	int n;
	printf("Enter any positive number : ");
	scanf("%d", &n);
	if(n%2 == 0)
		printf("%d is an even number\n",n);
	else
		printf("%d is an odd number\n",n);
}
   
/*	OUTPUT

$ cc even_odd.c
$ ./a.out
Enter any positive number : 4
4 is an even number

$ ./a.out
Enter any positive number : 5
5 is an odd number

*/
