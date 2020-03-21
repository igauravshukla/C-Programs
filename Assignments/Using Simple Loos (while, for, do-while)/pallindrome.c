/*

Q. Program to check whether the number is pallindrome or not.

*/
 
#include<stdio.h>

void main()
{
	int n, rev=0, num;
	printf("Enter the number : ");
	scanf("%d", &n);
	num = n;
	while(n > 0)
	{
		rev = rev * 10 + (n%10);
		n = n / 10;
	}
	if(rev == num)
		printf("%d is a pallindrome number\n", num);
	else
		printf("%d is not a pallindrome number\n", num);
}

/*	OUTPUT

$ cc pallindrome.c
$ ./a.out
Enter the number : 121
121 is a pallindrome number

$ ./a.out
Enter the number : 345
345 is not a pallindrome number

*/

