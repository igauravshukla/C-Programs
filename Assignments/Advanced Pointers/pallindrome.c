/**

Q. Write a program to allocate memory dynamically for storing n integers such that the memory is initialised to 0. Accept data
from user and count the number of pallindrome numbers.

**/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p, n, i, cnt, num, rev;
	printf("Enter value of n : ");
	scanf("%d", &n);
	p = (int*) calloc (n , sizeof(int));
	if(p == NULL)
		printf("Memory cannot be allocated\n");
	else
	{
		printf("Enter the elements : ");
		for(i=0; i<n; i++)
		{
			scanf("%d", (p+i));
		}
		printf("The pallindrome numbers from the given set are : ");
		cnt = 0;
		for(i=0; i<n; i++)
		{
			num = *(p + i);
			rev = 0;
			while (num > 0)
			{
				rev = rev * 10 + (num % 10);
				num /= 10;
			}
			if (rev == *(p+i))
			{
				printf("%d ", *(p + i));
				cnt++;
			}
		}
		printf("\nTotal number of pallindrome numbers are %d\n", cnt);
		free(p);
	}
}

/**	OUTPUT

Enter value of n : 6
Enter the elements : 11 12 22 33 45 56
The pallindrome numbers from the given set are : 11 22 33
Total number of pallindrome numbers are 3

**/
