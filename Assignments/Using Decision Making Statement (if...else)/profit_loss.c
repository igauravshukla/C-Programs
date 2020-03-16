/*

Q. Program to find out profit or loss.

*/

#include<stdio.h>

void main()
{
	int cp, sp, d;
	printf("Enter Cost Price and Selling Price : ");
	scanf("%d %d", &cp, &sp);
	d = cp - sp;
	if(d < 0)
		printf("Profit of Rs. %d\n",-d);
	else if(d>0)
		printf("Loss of Rs. %d\n",d);
	else
		printf("No Profit, No Loss\n");  
}

/*	OUTPUT

$ cc profit_loss.c
$ ./a.out
Enter Cost Price and Selling Price : 80 20
Loss of Rs. 60

$ ./a.out
Enter Cost Price and Selling Price : 40 60
Profit of Rs. 20

$ ./a.out
Enter Cost Price and Selling Price : 30 30
No Profit, No Loss

*/
