/*

Q. Write a C program that will determine the maximum absolute difference between adjacent pairs of the element in an array.
The array elements are randomly ordered. Strictly use pointer conventions.

*/

#include<stdio.h>

void main()
{
	int i, n, x, y, diff;
	printf("Number of elements in an array : ");
	scanf("%d", &n);
	int a[n];
	printf("Elements in an array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", (a+i));
	}
	int max_diff = abs((*a) - (*(a+1)));
	for(i=1; i<(n-1); i++)
	{
		diff = abs(*(a+i) - *(a+i+1));
		if(diff > max_diff)
		{
			x = *(a+i);
			y = *(a+i+1);
			max_diff = diff;
		}
	}
	printf("Maximum absolute difference = %d between %d and %d\n",max_diff, x, y);
}

/*output

Number of elements in an array : 9
Elements in an array : 41 67 34 0 69 24 78 58 62
Maximum absolute difference = 69 between 0 and 69

Number of elements in an array : 8
Elements in an array : 12 23 1 56 2 4 34 35
Maximum absolute difference = 55 between 1 and 56

*/
