/*

Q. Write a program to display n lines of foloowing pattern.
                         1 
                 2       1 
         3       2       1 
 4       3       2       1 
 
*/

#include<stdio.h>

void main()
{
	int n, k, i, sp;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	sp = n-1;
	for(i=1; i<=n; i++)
	{
		for(k=1; k<=sp; k++)
		{
			printf("\t");
		}
		for(k=i; k>=1; k--)
		{
			printf(" %d \t", k);
		}
		printf("\n");
		sp--;
	}
}

/** OUTPUT

$ cc pattern5.c
$ ./a.out
Enter the value of n : 4
                         1 
                 2       1 
         3       2       1 
 4       3       2       1 

$ ./a.out
Enter the value of n : 6
                                         1
                                 2       1
                         3       2       1
                 4       3       2       1
         5       4       3       2       1
 6       5       4       3       2       1

**/
