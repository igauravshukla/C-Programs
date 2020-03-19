/*

Q. Write a recursive function to calculate x^y without using standard library function and use it in main().

*/
 
#include<stdio.h>

int rpower(int x,int y)
{
	if (x == 0)
		return 0;
	else if(y == 0)
		return 1;
	else
		return x * rpower(x , y-1);
}

void main()
{
	int x, y;
	printf("Enter  value of x and y (for x^y operation) : ");
	scanf("%d %d", &x, &y);
	printf("%d raised to %d = %d\n", x, y, rpower(x,y));
}

/**	OUTPUT

$ cc x^y.c
$ ./a.out
Enter  value of x and y (for x^y operation) : 0 2
0 raised to 2 = 0

$ ./a.out
Enter  value of x and y (for x^y operation) : 1 0
1 raised to 0 = 1

$ ./a.out
Enter  value of x and y (for x^y operation) : 3 1
3 raised to 1 = 3

$ ./a.out
Enter  value of x and y (for x^y operation) : 2 3
2 raised to 3 = 8

**/
