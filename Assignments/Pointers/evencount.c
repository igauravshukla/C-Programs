/**

Q. Accept an array and  pass this array and counter to a function which will set this counter to number of even elements from
an array. Display this counter in main.

**/
  
#include<stdio.h>

void count(int *p , int n , int *e)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(*(p+i) % 2 == 0)
			(*e)++;
	}
}

void main()
{
	int a[20] , n, i, e = 0;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	printf("Enter the elements of an array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", (a+i));
	}
	count(a , n , &e);
	printf("Number of even numbers = %d\n", e);
}

/**	OUTPUT 

$ cc evencount.c
$ ./a.out
Enter the size of an array : 6
Enter the elements of an array : 3 4 5 6 7 8
Number of even numbers = 3

**/

