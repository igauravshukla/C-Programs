/*

Q. Write a program to display n lines o following pattern.
                         1
                 2       2
         3       3       3
 4       4       4       4
 
*/

# include<stdio.h>
main()
{
	int n, k, i, sp;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	sp = n-1;
	for(i=1; i<=n; i++)
	{
		for(k=1; k<=sp; k++)
		printf("\t");
  		for(k=1;k<=i;k++)
		{
			printf(" %d \t",i);
  		}
		printf("\n");
		sp--;
	}
}

/** OUTPUT

$ cc pattern4.c
$ ./a.out
Enter the value of n : 4
                         1
                 2       2
         3       3       3
 4       4       4       4

$ ./a.out
Enter the value of n : 6
                                         1
                                 2       2
                         3       3       3
                 4       4       4       4
         5       5       5       5       5
 6       6       6       6       6       6

**/
