/*

Q. Write a recursive function to calculate sum of digits of given number. Use this function in main() and display the sum.

*/

#include<stdio.h>

int rsum(int n)
{
	if(n == 0)
		return 0;
	else
		return (n%10 + rsum(n/10));
}

void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("Sum = %d\n", rsum(n));
}

/**	OUTPUT

$ cc sum_of_digits.c
$ ./a.out
Enter the number : 5
Sum = 5

$ ./a.out
Enter the number : 24
Sum = 6

**/
