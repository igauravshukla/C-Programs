/*

Q. Program to calculate and display the income tax.

*/

#include<stdio.h>

void main()
{
	double s, tax;
	printf("Enter annual salary : ");
	scanf("%lf", &s);
	if(s < 250000)
		tax = 0;
	else if(250000 <= s <= 500000)
		tax = 0.2 * s;
	else
		tax = 0.3 * s;
	printf("Income tax = Rs. %.2lf\n", tax);
}

/*	OUTPUT

$ cc profit_loss.c
$ ./a.out
Enter annual salary : 240000
Income tax = Rs. 0.00

$ ./a.out
Enter annual salary : 300000
Income tax = Rs. 60000.00

$ ./a.out
Enter annual salary : 600000
Income tax = Rs. 120000.00

*/
