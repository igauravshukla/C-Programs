/**

Q. Write a program which takes distance as a paramtere in terms of m,cm,mm. Add an integer k. The function should increment the
distance by k. Write main function to accept old distance. Pass it to the function and display new distance.

**/

#include<stdio.h>

void distance(int *m , int *cm , int *mm , int k)
{
	*mm = *mm + k;
	*cm = *cm + (*mm / 10);
	*mm = *mm % 10;
	*m = *m + (*cm / 100);
	*cm = *cm % 100;
}

void main()
{
	int k, m, mm, cm;
	printf("Enter distance in the term of m,cm,mm : ");
	scanf("%d %d %d", &m, &cm, &mm);
	printf("Enter an integer in terms of mm : ");
	scanf("%d", &k);
	printf("Old distance = %dm %dcm %dmm\n", m, cm, mm);
	distance(&m , &cm , &mm , k); 
	printf("New distance = %dm %dcm %dmm\n", m, cm, mm);
}

/**	OUTPUT

$ cc distance.c
$ ./a.out
Enter distance in the term of m,cm,mm : 2 88 8
Enter an integer in terms of mm : 340
Old distance = 2m 88cm 8mm
New distance = 3m 22cm 8mm

**/

