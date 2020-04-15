/*

Q. Design a function that returns a pointer to the maximum value of an array of doubles. If the array is empty, return NULL.
	double* maximum (double* a, int size);

*/
#include<stdio.h>
#include<stdlib.h>

double *maximum(double *a,int size)
{
	int i;
	double *p = NULL;
	double max = *a;
	for(i=1;i<size;i++)
	{
		if(*(a+i) > max)
			max = *(a+i);
	}
	p = &max;
	return p;
}

void main()
{
	int i,n;
	printf("Enter number of integers : ");
	scanf("%d",&n);
	double a[n];
	printf("Random numbers generated are :\n");
	for(i=0;i<n;i++)
	{
		a[i] = (double)rand();
		printf("%lf ",a[i]);
	}
	printf("\nMaximum number is %lf ",*(maximum(a,n)));
}

/*output

Enter number of integers : 3
Random numbers generated are :
41.000000 18467.000000 6334.000000
Maximum number is 18467.000000

Enter number of integers : 5
Random numbers generated are :
41.000000 18467.000000 6334.000000 26500.000000 19169.000000
Maximum number is 26500.000000

*/
