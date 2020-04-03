/**

Q. Write a program to sort an array.

*/

#include<stdio.h>

void seqsort(int a[20],int n)
{
	int i, k, t;
	for(i=0;i<(n-1);i++)
	{
		for(k=i+1; k<n; k++)
		{
			if(a[i] > a[k])
			{
				t = a[i];
				a[i] = a[k];
				a[k] = t;
			}
		}
	}
}

void main()
{
	int a[20], n, i, k;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	printf("Enter elements of an array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	seqsort(a , n);
	printf("contents of array is as below\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}

/**	OUTPUT

$ cc sorting_array.c
$ ./a.out
Enter the size of an array : 6
Enter elements of an array : 12 43 1 23 12 8
contents of array is as below
1 8 12 12 23 43 

**/

