/*

Q. Write a function iseven() which accepts an integer as parameters and returns 1 if number is even and 0 otherwise. Use this
function in main to accept 'n' numbers and calculate and display sum of only even numbers.

*/
 
#include<stdio.h>

int iseven(int n)
{
	if(n%2 == 0)
		return 1;
	else
		return 0;
}

void main()
{
	int n, i, num, sum = 0;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf("Enter the positive number(s) : ");
	for(i=1; i<=n; i++)
	{
		scanf("%d", &num);
		if(iseven(num))
			sum = sum + num;
	}
	printf("Sum of even numbers = %d\n", sum);
}

/** OUTPUT

$ cc even_odd.c
$ ./a.out
Enter the value of n : 5
Enter the positive number(s) : 2 3 4 5 6
Sum of even numbers = 12

**/

