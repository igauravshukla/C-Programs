/*

Q. Program to read a number n and find the sum of digits of it.

*/
 
#include<stdio.h>

void main()
{
	int n, sum=0;
	printf("Enter the number : ");
	scanf("%d", &n);
	while(n > 0)
	{
		sum = sum +(n % 10);
		n = n / 10;
	}
	printf("The sum of digits of given number is %d\n", sum);
}

/*	OUTPUT

$ cc sum_of_digits.c
$ ./a.out
Enter the number : 234
The sum of digits of given number is 9
 
*/

