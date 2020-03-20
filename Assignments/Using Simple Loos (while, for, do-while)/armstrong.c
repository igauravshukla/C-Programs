/*

Q. Program to check whether given number is armstrong number or not.

*/
 
#include<stdio.h>
#include<math.h>

void main()
{
	int n, r, sum = 0, num, nod = 0;
	printf("Enter the number : ");
	scanf("%d", &n);
	num = n;
	while(num > 0)
	{
		num /= 10;
		nod++;
	}
	num = n;
	while(n > 0)
	{
		r = n % 10;
		sum = sum + pow(r, nod);
		n = n / 10;
	}
	if(sum == num)
		printf("%d is an armstrong number\n",num);
	else
		printf("%d is not an armstrong number\n",num);
}

/*	OUTPUT

$ cc armstrong.c
$ ./a.out
Enter the number : 153
153 is an armstrong number

$ ./a.out
Enter the number : 234
234 is not an armstrong number

$ ./a.out
Enter the number : 1634
1634 is an armstrong number

*/

