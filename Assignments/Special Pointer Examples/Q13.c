/*

Q. Write a program  in C to form a array consists of the intersection of the elements of two arrays. Use the pointer notations
only.

*/

#include<stdio.h>

void main()
{
	int c[20],n , i, j, m, k = 0;
	printf("Enter the size of first set : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of first set : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", (a+i));
	}
	printf("Enter the size of second set : ");
	scanf("%d", &m);
	int b[n];
	printf("Enter elements of second set : ");
	for(i=0; i<m; i++)
	{
		scanf("%d", (b+i));
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(*(b+j) == *(a+i))
				break;
		}
		if(j<m)
		{
			*(c+k) = *(a+i);
			k++;
		}
	}
	printf("Intersection elements are : ");
	for(i=0; i<k; i++)
	{
		printf("%d ",*(c+i));
	}
}

/*output

Enter the size of first set : 5
Enter elements of first set : 12 23 34 45 56
Enter the size of second set : 3
Enter elements of second set : 12 23 4
Intersection elements are : 12 23

*/
