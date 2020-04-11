/**

Q. Accept an array. Pass this array and two counters to a function  which will set the first couter to total number of positive
integers and second counter to total number of negative integers. Display this counters in main.

**/
  
#include<stdio.h>

void count(int *p , int n , int *cp , int *cn)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(*(p+i) > 0)
			(*cp)++;
		else if(*(p+i) < 0)
			(*cn)++;
	}
}

void main()
{
	int a[20], n, i, cp = 0, cn = 0;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	printf("Enter the elements of an array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", (a+i));
	}
	count(a , n , &cp , &cn);
	printf("Number of positive integers = %d\n", cp);
	printf("Number of negative integers = %d\n", cn);
}

/**	OUTPUT

$ cc count.c
$ ./a.out
Enter the size of an array : 5
Enter the elements of an array : 1 -2 3 4 -5
Number of positive integers = 3
Number of negative integers = 2

**/
