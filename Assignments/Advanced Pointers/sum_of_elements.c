/**

Q. Write a program to store n integers dynamically and find the sum of these integers.

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p, n, i, sum = 0;
	printf("Enter value of n : ");
	scanf("%d", &n);
	p = (int*) malloc (n * sizeof(int));
	if(p == NULL)
		printf("Memory cannot be allocated\n");
	else
	{
		printf("Enter the elements : ");
		for(i=0; i<n; i++)
		{
			scanf("%d", p+i);
		}
		for(i=0; i<n; i++)
		{
			sum = sum + *(p+i);
		}
		printf("Sum = %d\n", sum);
		free(p);
	}
}

/**	OUTPUT

Enter value of n : 5
Enter the elements : 12 2 13 4 3
Sum = 34

**/
