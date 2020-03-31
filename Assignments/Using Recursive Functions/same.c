/*

Q. Write a recursive function to print digits of a given number in same order. Use this function in main().
    n = 123
    o/p = 123

*/
 
#include<stdio.h>

int rprint(int n)
{
	if(n < 10)
		printf("%d", n);
	else
	{
		rprint(n/10);
		printf("%d", n%10);
	}
}

void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("Digits in same order = ");
	rprint(n);
}


/**  OUTPUT

$ cc same.c
$ ./a.out
Enter the number : 123
Digits in same order = 123

**/

