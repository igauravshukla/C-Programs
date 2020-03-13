/*

Q. Program to display interchanged value of 2 integers.

*/

#include<stdio.h>

void main()
{
	int x,y,t;
	printf("Enter 2 numbers x and y : ");
	scanf("%d %d", &x, &y);
	t = x;
	x = y;
	y = t;
	printf("Interchanged values are x = %d and y = %d\n", x, y);
}

/*  OUTPUT

$ cc Interchanged_Value.c
$ ./a.out
Enter 2 numbers x and y : 1 2
Interchanged values are x = 2, y = 1 
 
*/

