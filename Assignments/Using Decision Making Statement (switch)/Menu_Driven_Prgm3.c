/*
Q. Program to perform the corresponding actions.

    OPTIONS        ACTIONS
    1            find area of circle
    2            find area of square
    3            find area of cuboid

*/
 
#include<stdio.h>

void main()
{
	int option;
	float r, s, l, h, b;
	printf("\nMAIN MENU\n");
	printf("1 : To find area of circle\n");
	printf("2 : To find area of square\n");
	printf("3 : To find area of cuboid\n");
	printf("\nEnter the option : ");
	scanf("%d", &option);
	switch(option)
	{
		case 1	:	printf("Radius of circle : ");
					scanf("%f", &r);
					printf("Area of circle = %.2f\n", (3.14*r*r));
					break;

		case 2	:	printf("Length of side of square : ");
					scanf("%f", &s);
					printf("Area of square = %.2f\n", (s*s));
					break;

		case 3	:	printf("Enter length, breadth, height of cuboid : ");
					scanf("%f %f %f", &l, &b, &h); 
					printf("Area of cuboid = %.2f\n", 2*((l*b)+(b*h)+(h*l)));
					break;

		default : 	printf("Invalid Option Selected...\n");
					break;
	}
}

/*	OUTPUT

$ cc Menu_Driven_Prgm3.c
$ ./a.out

MAIN MENU 
1 : To find area of circle 
2 : To find area of square 
3 : To find area of cuboid 

Enter the option : 1
Radius of circle : 3
Area of circle = 28.26

--------------------------------

$ ./a.out

MAIN MENU 
1 : To find area of circle 
2 : To find area of square 
3 : To find area of cuboid 

Enter the option : 2
Length of side of square : 3
Area of square = 9.00

--------------------------------

$ ./a.out

MAIN MENU 
1 : To find area of circle 
2 : To find area of square 
3 : To find area of cuboid 

Enter the option : 3
Enter length, breadth, height of cuboid : 1 2 3
Area of cuboid = 22.00

--------------------------------

$ ./a.out

MAIN MENU 
1 : To find area of circle 
2 : To find area of square 
3 : To find area of cuboid 

Enter the option : 3
Invalid Option Selected...

*/

