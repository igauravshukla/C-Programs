/**

Q. */

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, j, r, c, *a[20];
	printf("Enter the order of matrix : ");
	scanf("%d %d" , &r , &c);
	printf("Enter the matrix elements : ");
	for(i=0 ; i<r ; i++)
	{
		a[i] = (int*) malloc (c*sizeof(int));
		for(j=0; j<c; j++)
		{
			scanf("%d" , (*(a+i)+j));	// a[i]+j or &a[i][j]
		}
	}
	printf("The contents of matrix are as below : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d " , *(*(a+i)+j));	// *(a[i]+j) or a[i][j]
		}
		printf("\n");
	}
}

/**	OUTPUT

Enter the order of matrix : 3 3
Enter the matrix elements : 1 2 3 4 5 6 7 8 9
The contents of matrix are as below :
1 2 3
4 5 6
7 8 9

*/
