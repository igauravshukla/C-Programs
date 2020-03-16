/*

Q. Program to find the quadrant in which the given point lies.

*/

#include<stdio.h>

void main()
{
	int x, y;
	printf("Enter the co-ordinates of point (x,y) : ");
	scanf("%d %d", &x, &y);
	if(x > 0 && y > 0)
		printf("Point lies in first quadrant\n");
	else if(x < 0 && y > 0)
		printf("Point lies in second quadrant\n");
	else if(x < 0 && y < 0)
		printf("Point lies in third quadrant\n");
	else if(x > 0 && y < 0)
		printf("Point lies in fourth quadrant\n");
	else
		printf("Co-ordinate is a origin\n");
}

/*   OUTPUT

$ cc find_quadrant.c
$ ./a.out
Enter the co-ordinates of point (x,y) : 2 3
Point lies in first quadrant

$ ./a.out
Enter the co-ordinates of point (x,y) : -2 3
Point lies in second quadrant

$ ./a.out
Enter the co-ordinates of point (x,y) : -6 -6
Point lies in third quadrant

$ ./a.out
Enter the co-ordinates of point (x,y) : 8 -4
point lies in forth quadrant

$ ./a.out
enter the value of x and y: 0 0
Co-ordinate is a origin

*/
