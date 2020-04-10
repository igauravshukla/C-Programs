/**

Q. Write a program to swap integers to illustrate pass by value and pass by reference.

**/

#include<stdio.h>

void swap1(int a , int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void swap2(int *a , int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void main()
{
	int x, y;
	printf("Enter two numbers : ");
	scanf("%d %d", &x, &y);
	printf("Before function calls :\n");
	printf("x = %d and y = %d\n", x, y);
	swap1(x , y);
	printf("After function call of swap1 :\n");
	printf("x = %d and y = %d\n", x, y);
	swap2(&x , &y);
	printf("After function call of swap2 :\n");
	printf("x = %d and y = %d\n", x, y);
}

/** OUTPUT

$ cc swapping.c
$ ./a.out
Enter two numbers : 2 3
Before function calls :
x = 2 and y = 3
After function call of swap1 :
x = 2 and y = 3
After function call of swap2 :
x = 3 and y = 2

**/

