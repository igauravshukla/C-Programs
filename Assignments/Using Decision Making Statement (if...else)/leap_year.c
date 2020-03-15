/*

Q. Program to check whether given year is leap year or not.

*/

#include<stdio.h>

void main()
{
	int n;
	printf("Enter a year : ");
	scanf("%d", &n);
	if((n%4 == 0 && n%100 != 0) || n%400 == 0)
		printf("%d is a leap year\n",n);
	else
		printf("%d is not a leap year\n",n);  
}

/*	OUTPUT
  
$ cc leap_year.c
$ ./a.out
Enter a year : 2016
2006 is a leap year

$ ./a.out
Enter a year : 2000
2000 is a leap year

$ ./a.out
Enter a year : 2001
2001 is not a leap year

*/

