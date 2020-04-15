/*

Q. Write a c function with a return type as void and it should take n numbers into an array and find the maximum, minimum and
sum of the elements in the array using pointer variables.

*/
#include<stdio.h>

void calculate(int *a,int n)
{
	int min,max,sum,i;
	min = max = sum = *a;
	for(i=1;i<n;i++)
	{
		if(*(a+i) < min)
	 		min = a[i];
	 	else if(*(a+1) > max)
	 		max = a[i];
	 	sum += *(a+i);
	}
	printf("\nMinimum = %d\n",min);
	printf("Maximum = %d\n",max);
	printf("Sum = %d\n",sum);
}

void main()
{
	int n,i;
	printf("Enter number of integers : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the values: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	calculate(a,n);
}

/*

Enter number of integers : 5

Enter the values: 23 34 12 45 2

Minimum = 2
Maximum = 45
Sum = 116

*/
