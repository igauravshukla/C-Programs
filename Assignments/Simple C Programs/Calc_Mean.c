/*

Q. Program to calculate Arithmetic Mean and Harmonic Mean of 2 numbers.

*/

#include<stdio.h>

void main()
{
	float n1,n2,AM,HM;
	printf("Enter 2 numbers : ");
	scanf("%f %f", &n1, &n2);
	AM = (n1+n2)/2.0;
	HM = (float)(n1*n2)/(n1+n2);
	printf("Arithmatic Mean = %f\n", AM);
	printf("Harmonic Mean = %f\n", HM);
}

/*  OUTPUT

$ cc Calc_Mean.c
$ ./a.out
Enter 2 numbers : 8 3
Arithmatic Mean=5.500000
Harmonic Mean2.181818

*/

