/**

Q. Write a program to convert from decimal number to its equivalent ternary number.

*/

#include<stdio.h>

void main()
{
	int i = 0, a[20], n;
	printf("Enter decimal number : ");
	scanf("%d", &n);
	while(n > 0)
	{
		a[i] = n % 3;
		i++;
		n = n / 3;
	}
	printf("Equivalent Ternary Number : ");
	for(i--; i>=0; i--)
	{
		printf("%d", a[i]);
	}
}

/**	OUTPUT

$ cc dec_to_ternary.c
$ ./a.out
Enter decimal number : 212
Equivalent Ternary Number : 21212

*/

