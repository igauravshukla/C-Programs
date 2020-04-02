/*

Q. Write a program for linear search.

*/

#include<stdio.h>

void main()
{
	int n, i, key;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of an array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter key value to be searched : ");
	scanf("%d", &key);
	if(search(a , n , key))
		printf("Element found\n");
	else
		printf("Element not found\n");
}

int search(int a[20],int n, int key)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i] == key)
			return 1;
	}
	return 0;
}

/**	OUTPUT

$ cc linear_search.c
$ ./a.out
Enter the size of an array : 4
Enter elements of an array : 1 2 3 4
Enter key value to be searched : 5
Element not found

$ ./a.out
Enter the size of an array : 4
Enter elements of an array : 1 2 3 4
Enter key value to be searched : 1
Element found

**/    
