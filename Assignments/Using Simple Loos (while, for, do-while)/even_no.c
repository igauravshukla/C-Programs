/*

Q. Program to display even numbers upto the given number n.

*/
 
#include<stdio.h>

main()
{
	int i, n;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf("Even number(s) upto %d are ",n);
	for(i=0; i<=n; i+=2)
	{
		printf("%d ",i);
	}
}

/* OUTPUT

$ cc even_no.c
$ ./a.out
Enter the value of n : 10
Even number(s) upto 10 are 0 2 4 6 8 10

*/
