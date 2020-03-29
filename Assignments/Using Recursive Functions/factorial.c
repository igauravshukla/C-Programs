/*

Q. Write a recursive function to calculate factorial of a number. And use this function in main() to print factorial.

*/

#include<stdio.h>

int rfact(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n * rfact(n-1);
}

void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("%d! = %d\n",n, rfact(n));
}

/**	OUTPUT

$ cc factorial.c 
$ ./a.out
Enter the number : 4
4! = 24

Enter the number : 6
6! = 720

**/
