/*

Q. Write a program to accept a matrix of given order and interchange any two rows and columns in the original matrix.
Use pointer to perform this operation.

*/

#include<stdio.h>

void main()
{
	int a[20][20], i, j, n, m, opt, x, y, temp;
	printf("Enter the order of matrix : ");
	scanf("%d %d", &n, &m);
	printf("Enter elements of matrix :\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d", (*(a + i) + j));
		}
	}
	printf("\nInput matrix is :\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
//			printf("%d ", *(*(a + i) + j));
			printf("%d ", *(a + (i * m) + j));
		}
		printf("\n");
	}
	do
	{
		printf("\n*****MENU*****");
		printf("\n1. Interchange any two rows");
		printf("\n2. Interchange any two columns");
		printf("\n3. Exit");
		printf("\nEnter your option : ");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1	:	printf("\nSelect the rows you want to interchange. Enter the row number : ");
						scanf("%d %d", &x, &y);
						for(j=0; j<m; j++)
						{
							temp = *(*(a + x - 1) + j);
							*(*(a + x - 1) + j) = *(*(a + y - 1) + j);
							*(*(a + y - 1) + j) = temp;
						}
						printf("\nNew matrix after interchanging is :\n");
						for(i=0; i<n; i++)
						{
							for(j=0; j<m; j++)
							{
								printf("%d ", *(*(a + i) + j));
							}
							printf("\n");
						}
						break;

			case 2	:	printf("\nSelect the columns you want to interchange. Enter the column number : ");
						scanf("%d %d", &x, &y);
						for(i=0; i<n; i++)
						{
							temp = *(*(a + i) + x - 1);
							*(*(a + i) + x - 1) = *(*(a + i) + y - 1);
							*(*(a + i) + y - 1) = temp;
						}
						printf("\nNew matrix after interchanging is :\n");
						for(i=0; i<n; i++)
						{
							for(j=0; j<m; j++)
							{
								printf("%d ", *(*(a + i) + j));
							}
							printf("\n");
						}
						break;

			case 3	:	printf("Program terminated...\n");
						break;

			default	:	printf("Invalid Option Selected...\n");
		}
	}while(opt != 3);
}

/*output

Enter the order of matrix : 3 3
Enter elements of matrix :
1 2 3 4 5 6 7 8 9

Input matrix is :
1 2 3
4 5 6
7 8 9

*****MENU*****
1. Interchange any two rows
2. Interchange any two columns
3. Exit
Enter your option : 1

Select the rows you want to interchange. Enter the row number : 1 3

New matrix after interchanging is :
7 8 9
4 5 6
1 2 3

*****MENU*****
1. Interchange any two rows
2. Interchange any two columns
3. Exit
Enter your option : 1

Select the rows you want to interchange. Enter the row number : 2 3

New matrix after interchanging is :
7 8 9
1 2 3
4 5 6

*****MENU*****
1. Interchange any two rows
2. Interchange any two columns
3. Exit
Enter your option : 2

Select the columns you want to interchange. Enter the column number : 1 3

New matrix after interchanging is :
9 8 7
3 2 1
6 5 4

*****MENU*****
1. Interchange any two rows
2. Interchange any two columns
3. Exit
Enter your option : 2

Select the columns you want to interchange. Enter the column number : 2 3

New matrix after interchanging is :
9 7 8
3 1 2
6 4 5

*****MENU*****
1. Interchange any two rows
2. Interchange any two columns
3. Exit
Enter your option : 4
Invalid Option Selected...

*****MENU*****
1. Interchange any two rows
2. Interchange any two columns
3. Exit
Enter your option : 3
Program terminated...

*/
