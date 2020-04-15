/*

Q. Write a program that reverses an integer array using pointers.

*/

#include<stdio.h>

int i;
void reverse(int *a,int n)
{
	for(i=n-1;i>=0;i--)
		printf("%d ",*(a+i));
}

int main()
{
	int n;
	printf("Enter number of integers : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the values: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	reverse(a,n);
	return 0;
}

/*output

Enter number of integers : 5

Enter the values: 1 2 3 4 5
5 4 3 2 1

*/
