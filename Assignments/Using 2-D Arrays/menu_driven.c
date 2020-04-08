/**

Q. Write a menu driven program to perform following actions.

1. Read a matrix of order r X c.
2. To find trace of matrix (sum of diagonal elements)
3. To check wheather matrix is upper triangular or not.
4. To check wheather matrix is lower triangular or not.
5. To check wheaher matrix is symmetric or not.
6. To check matrix is identity matrix or not.

**/
 
#include<stdio.h>

void main()
{
	int opt, r, c, sum, i, j, a[20][20], flag;
	do
	{
		printf("\n***** MENU ***** \n");
		printf("1. Read a matrix of order r X c\n");
		printf("2. Sum of diagonal elements\n");
		printf("3. Upper triangular matrix\n");
		printf("4. Lower triangular matrix\n");
		printf("5. Symmetric matrix\n");
		printf("6. Identity matrix\n");
		printf("7. Exit\n");
		printf("\nEnter option : ");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1	:	printf("Enter the order of matrix : ");
						scanf("%d %d", &r, &c);
						printf("Enter the elements of matrix:\n");
						for(i=0; i<r; i++)
						{
							for(j=0; j<c; j++)
							{
								scanf("%d", &a[i][j]);
							}
						}
						printf("\nInput matrix:\n");
						for(i=0; i<r; i++)
						{
							for(j=0; j<c; j++)
							{
								printf("%d ", a[i][j]);
							}
							printf("\n");
						}
						break;

			case 2	:	if(r != c)
							printf("Matrix is not a square matrix...\n");
						else
						{
							sum = 0;
							for(i=0; i<r; i++)
							{
								sum = sum + a[i][i];
        					}
							printf("Trace of matrix = %d\n", sum);
						}
						break;

			case 3	:	if(r != c)
							printf("Matrix is not a square matrix...\n");
						else
						{
							for(i=0; i<r; i++)
							{
								for(j=0; j<c; j++)
								{
									if(i<=j && a[i][j]==0)
										break;
									if(i>j && a[i][j]!=0)
										break;
								}
								if(j<c)
									break;
							}
							if(j<r)
								printf("Matrix is not a upper triangular matrix...\n");
							else
								printf("Matrix is a upper triangular matrix...\n");
						}
						break;

			case 4	:	if(r != c)
							printf("Matrix is not a square matrix...\n");
						else
						{
							flag = 1;
							for(i=0; i<r; i++)
							{
								for(j=0; j<c; j++)
								{
									if(i>=j && a[i][j]==0)
										flag = 0;
									if(i<j && a[i][j]!=0)
										flag = 0;
								}
							}
							if(flag == 0)
								printf("Matrix is not a lower triangular matrix...\n");
							else
								printf("Matrix is a lower triangular matrix...\n");
        				}
						break;

			case 5	:	if(r != c)
							printf("Matrix is not a square matrix...\n");
						else
						{
							flag = 1;
							for(i=0; i<r; i++)
							{
								for(j=0; j<c; j++)
								{
									if(a[i][j] != a[j][i])
										flag = 0;
								}
							}
							if(flag == 0)
								printf("Matrix is not a symmetric matrix...\n");
							else
								printf("Matrix is symmetric matrix...\n");

						}
						break;

			case 6	:	if(r != c)
							printf("Matrix is not a square matrix...\n");
						else
						{
							flag = 1;
							for(i=0; i<r; i++)
							{
								for(j=0; j<c; j++)
								{
									if(i==j && a[i][j]!=1)
										flag = 0;
									if(i!=j && a[i][j]!=0)
										flag = 0;
								}
							}
							if(flag == 0)
								printf("Not a identity matrix...\n");
							else
								printf("Identity matrix...\n");
						}
						break;

			case 7	:	printf("Program terminated...\n");
						break;

			default	:	printf("Invalid Option Selected...\n");
		}
	}while(opt!=7);
}

/**	OUTPUT

$ cc menu_driven.c
$ ./a.out

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 1
Enter the order of matrix : 3 3
Enter the elements of matrix:
1 2 3 0 4 5 0 0 6

Input matrix:
1 2 3
0 4 5
0 0 6

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 2
Trace of matrix = 11

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 3
Matrix is a upper triangular matrix...

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 4
Matrix is not a lower triangular matrix...

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 5
Matrix is not a symmetric matrix...

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 6
Not a identity matrix...

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 7
Program terminated...

----------------------------------------------

$ ./a.out

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 1
Enter the order of matrix : 3 3
Enter the elements of matrix:
1 0 0 2 3 0 4 5 6

Input matrix:
1 0 0
2 3 0
4 5 6

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 2
Trace of matrix = 10

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 4
Matrix is a lower triangular matrix...

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 7
Program terminated...

----------------------------------------------

$ ./a.out

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 1
Enter the order of matrix : 3 3
Enter the elements of matrix:
1 1 1 1 1 1 1 1 1

Input matrix:
1 1 1
1 1 1
1 1 1

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 5
Matrix is symmetric matrix...

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 7
Program terminated...

----------------------------------------------

$ ./a.out

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 1
Enter the order of matrix : 3 3
Enter the elements of matrix:
1 0 0 0 1 0 0 0 1

Input matrix:
1 0 0
0 1 0
0 0 1

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 5
Matrix is symmetric matrix...

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 6
Identity matrix...

***** MENU *****
1. Read a matrix of order r X c
2. Sum of diagonal elements
3. Upper triangular matrix
4. Lower triangular matrix
5. Symmetric matrix
6. Identity matrix
7. Exit

Enter option : 7
Program terminated...

**/
