/**

Q. Write a program to allocate memory dynamically for storing n integers such that the memory is initialised to 0. Accept one
more array and merge its contents with previous array.

**/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p , n , i , m;
	printf("Enter size of first array : ");
	scanf("%d" , &n);
	p = (int *) calloc (n , sizeof(int));
	if (p == NULL)
		printf("Memory cannot be allocated\n");
	else
	{
		printf("Enter the elements : ");
		for(i=0 ; i<n ; i++)
		{
			scanf("%d" , (p+i));
		}
		printf("Number of elements to add : ");
		scanf("%d" , &m);
		printf("Enter new elements : ");
		p = (int *) realloc (p , n + m * sizeof(int));
		if(p == NULL)
			printf("Memory cannot be allocated\n");
		else
		{
			for(i=n ; i<n+m ; i++)
 			{
				scanf("%d" , (p+i));
			}
			printf("The complete list is as below : ");
			for(i=0 ; i<n+m ; i++)
			{
				printf("%d " , *(p + i));
			}
			free(p);
		}
	} 
}

/**	OUTPUT

Enter size of first array : 3
Enter the elements : 1 2 3
Number of elements to add : 3
Enter new elements : 2 3 4
The complete list is as below : 1 2 3 2 3 4

*/
