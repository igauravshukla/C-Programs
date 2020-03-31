/*

Q. Write a recursive function to print digits of a number in reverse order. Use this function in main().
    n = 123
    o/p = 321

*/
 
#include<stdio.h>

void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("Reverse order = ");
	rprint(n);
}

int rprint(int n)
{
	if(n < 10)
		printf("%d", n);
	else
	{
		printf("%d",n%10);
		rprint(n/10);
	}
}

/**  OUTPUT

$ cc reverse.c 
$ ./a.out
Enter the number : 123
Reverse order = 321

$ ./a.out
Enter the number : 4
Reverse order = 4

**/

