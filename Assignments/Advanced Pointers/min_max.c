/**

Q. Write a program to read n integers. Store them dynamically and find minimum and maximum from these integers.

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p, n, i, min, max;
	printf("Enter value of n : ");
	scanf("%d", &n);
	p = (int*) 	malloc (n * sizeof(int));
	if(p == NULL)
		printf("Memory cannot be allocated\n");
	else
	{
		printf("Enter the elements : ");
		for(i=0; i<n; i++)
		{
			scanf("%d", (p+i));
		}
		min = max = *p;
		for(i=1; i<n; i++)
		{
			if (min > *(p+i))
				min = *(p+i);
			else if (max < *(p+i))
				max = *(p+i);
		}
		printf("Minimum number = %d\n", min);
		printf("Maximum number = %d\n", max);
		free(p);
 	}
}

/**	OUTPUT

Enter value of n : 5
Enter the elements : 12 1 34 2 4
Minimum number = 1
Maximum number = 34

*/

