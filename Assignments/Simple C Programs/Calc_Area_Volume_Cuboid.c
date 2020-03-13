/*

Q.. Program to calculate surface area and volume of cuboid.

*/

#include<stdio.h>

void main()
{
	int l,b,h,s,v;
	printf("Enter length, breadth and height of cuboid : ");
	scanf("%d %d %d", &l, &b, &h);
	s = 2*((l*b)+(b*h)+(h*l));
	v = l * b * h;
	printf("Surface Area = %d\n", s);
	printf("Volume = %d\n", v);
}

/*  OUTPUT

$ cc Calc_Area_Volume_Cuboid.c
$ ./a.out
Enter length, breadth and height of cuboid : 2 3 4
Surface Area = 52
Volume = 24
 
*/

