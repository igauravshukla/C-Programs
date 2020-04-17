/*

Q. Write a function which return array pointer. The function takes an integer array if any of the element of the array produces
the sum of its digit in single digit copy it in another array. After copying all such element, the function returns the pointer
to this array.

*/

#include<stdio.h>

int j;

int *calculate(int *a,int n)
{
	static int ans[10], i;
	for(i=0; i<n; i++)
	{
		int x = *(a+i);
		int sum = 0;
		while(*(a+i) > 0)
		{
			sum += ((*(a+i)) % 10);
			(*(a+i)) /= 10;
		}
		if(sum >=0 && sum <10)
		{
			*(ans+j) = x;
			j++;
		}
	}
	return ans;
}

void main()
{
	int i, n, *p;
	printf("No. of array elements : ");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		a[i] = rand()%100;
		printf("%d\t",a[i]);
	}
	p = calculate(a,n);
	printf("\nReturned array elements :\n");
	for(i=0; i<j; i++)
		printf("%d\t", *(p+i));
}

/*output

No. of array elements : 50
41      67      34      0       69      24      78      58      62      64
5       45      81      27      61      91      95      42      27      36
91      4       2       53      92      82      21      16      18      95
47      26      71      38      69      12      67      99      35      94
3       11      22      33      73      64      41      11      53      68

Returned array elements :
41      34      0       24      62      5       45      81      27      61
42      27      36      4       2       53      21      16      18      26
71      12      35      3       11      22      33      41      11      53

*/
