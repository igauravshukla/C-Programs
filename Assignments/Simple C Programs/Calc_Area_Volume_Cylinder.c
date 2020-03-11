/*

Q.. Program to calculate surface area and volume of cylinder.

*/

#include<stdio.h>

void main()
{
	float s,v,r,h;
	printf("Enter radius and height of cylinder : ");
	scanf("%f %f",&r,&h);
	s = (2*3.14*r*r) + (2*3.14*r*h);
	v = 3.14*r*r*h;
	printf("Surface Area = %f\n", s);
	printf("Volume = %f\n", v);
}

/*  OUTPUT

$ cc Calc_Area_Volume_Cylinder.c
$ ./a.out
Enter radius and height of cylinder : 4 5
Surface Area = 226.080002
Volume = 251.199997
 
*/

