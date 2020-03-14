/*

Q. Program to calculate distance between two points.

*/

#include<stdio.h>
#include<math.h>

void main()
{
	int x1,x2,y1,y2;
	float d;
	printf("Enter (x1,y1) of 1st point : ");
	printf("Enter (x2,y2) of 2nd point : ");
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("Distance = %f\n", d);
}

/*  OUTPUT

$ cc Calc_Distance.c
$ ./a.out
Enter (x1,y1) of 1st point : 2 3
Enter (x2,y2) of 2nd point : 4 5
Distance = 2.828427 

*/

