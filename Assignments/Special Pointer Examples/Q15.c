/*

Q. Write a program in c, that will be accept 20 different numbers from user (+ve as well as –ve) and perform addition of all
positive numbers. The program should also display the number of +ve and – ve element in that list. Use pointer notations only.

*/

#include<stdio.h>

void operation(int *a, int *nop, int *non, int *sum)
{
	int i;
	for(i=0; i<20; i++)
	{
		if(*(a+i) > 0)
		{
			(*nop)++;
			*sum += *(a+i);
		}
		else if(*(a+i) < 0)
			(*non)++;
		
	}
}

void main()
{
	int i, nop = 0, non = 0, sum = 0;
	int a[20];
	printf("Enter numbers :\n");
	for(i=0; i<20; i++)
	{
		scanf("%d", (a+i));
	}
	operation(a, &nop, &non, &sum);
	printf("Number of positive elements = %d\n", nop);
	printf("Number of negative elements = %d\n", non);
	printf("Sum of positive elements = %d\n", sum);
}

/*output

Enter numbers :
12 -2 -5 -2 6 7 -10 10 -20 4 4 9 13 -2 0 8 2 -13 2 -1
Number of positive elements = 11
Number of negative elements = 8
Sum of positive elements = 77

*/
