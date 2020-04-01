/**

Q. Write a program to read an array of n integers and display it in same and reverse order.

*/

#include<stdio.h>

void main()
{
	int n, i;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	int a[n];
	printf("Enter array elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Array in same order is as below:\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\nArray in reverse order is as below:\n");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
}

/**	OUTPUT

$ cc display_array.c
$ ./a.out
Enter the size of an array : 4
Enter array elements : 1 2 3 4
Array in same order is as below:
1 2 3 4 

Array in reverse order is as below:
4 3 2 1 

**/
    
