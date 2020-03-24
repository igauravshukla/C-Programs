/*

Q. Write a program to display n lines for following pattern.
 1       1       1       1 
         2       2       2 
                 3       3 
                         4 

*/

#include<stdio.h>

void main()
{
	int n, k, i, sp;
	printf("Enter the va;ue of n : ");
	scanf("%d", &n);
	sp = 0;
	for(i=1; i<=n; i++)
	{
		for(k=1; k<=sp; k++)
		{
			printf("\t");
		}
		for(k=1;k<=(n-i+1);k++)
		{
			printf(" %d \t", i);
		}
		printf("\n");
		sp++;
	}
}

/** OUTPUT

$ cc pattern6.c
$ ./a.out
Enter the value of n : 4
 1       1       1       1 
         2       2       2 
                 3       3 
                         4 
 
$ ./a.out
Enter the va;ue of n : 6
 1       1       1       1       1       1
         2       2       2       2       2
                 3       3       3       3
                         4       4       4
                                 5       5
                                         6

**/

