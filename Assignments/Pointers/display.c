/**

Q. Write a program to read an array of n integers. Display it in same order as well as in reverse order using pointers.

**/
 
#include<stdio.h>

void main()
{
	int a[20], n, i, *p;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	printf("Enter elements of an array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", (a+i));
	}
	printf("Elements in same order : ");
	for(p=a; p<(a+n); p++)
	{
		printf("%d ", *p);
	}
	printf("\nElements in reverse order : ");
	for(p=a+n-1; p>=a; p--)
	{
		printf("%d ", *p);
	}
	printf("\n");
}

/**	OUTPUT

$ cc display.c
$ ./a.out
Enter the size of an array : 5
Enter elements of an array : 1 2 3 4 5
Elements in same order : 1 2 3 4 5 
Elements in reverse order : 5 4 3 2 1

*/
