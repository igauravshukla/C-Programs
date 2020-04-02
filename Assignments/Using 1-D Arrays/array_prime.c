/**

Q. Write a program to read n integers and create array of prime numbers.

*/

#include<stdio.h>

void main()
{
	int n, i, num, j, k=0;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	int prime[n];
	printf("Enter elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &num);
		for(j=2; j<num; j++)
		{
			if (num%j == 0)
				break;
		}
		if(j==num)
		{
			prime[k] = num;
			k++;
		}
	}
	printf("Contents of array conatining prime numbers is as below:\n");
	for(i=0; i<k; i++)
	{
		printf("%d ",prime[i]);
	}
}

/**	OUTPUT

Enter the size of an array : 4
Enter elements : 23 4 45 56
Contents of array conatining prime numbers is as below:
23 

$ ./a.out
Enter the size of an array : 4
Enter elements : 2 3 4 5 6
Contents of array conatining prime numbers is as below:
2 3 5 
 
**/

