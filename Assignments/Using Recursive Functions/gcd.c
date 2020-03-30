/*

Q. Write a recursive function to find GCD of 2 numbers. Use this function in main().

*/
 
#include<stdio.h>

int gcd(int a,int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b , a%b);
}

void main()
{
	int x, y;
	printf("Enter 2 numbers : ");
	scanf("%d %d", &x, &y);
	printf("GCD of %d and %d is %d\n", x, y, gcd(x,y));
}

/**	OUTPUT

$ cc gcd.c
$ ./a.out
Enter 2 numbers : 34 34
GCD of 34 and 34 is 34

$ ./a.out
Enter 2 numbers : 33 55
GCD of 33 and 55 is 11

**/

