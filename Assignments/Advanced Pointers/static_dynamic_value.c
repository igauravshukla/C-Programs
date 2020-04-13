/**

Q. Write a program to display the contents of an array using pointer notation.

**/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, n, a[20], *p;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	printf("Enter elements of array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d" , &a[i]);
	}
	printf("Elements\tStatic value\tDynamic value\n");
	p = a;
	for(i=0; i<n; i++)
	{
		printf("a[%d]\t\t%d\t\t%d\n" , i , a[i] , *(p+i));
	}
	free(p);
}

/**	OUTPUT

Enter the size of an array : 5
Enter elements of array : 1 2 3 4 5
Elements        Static value    Dynamic value
a[0]            1               1
a[1]            2               2
a[2]            3               3
a[3]            4               4
a[4]            5               5

*/
