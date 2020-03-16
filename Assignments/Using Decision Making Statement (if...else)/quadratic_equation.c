/*

Q. Program to calculate roots of quadratic equation.

*/

#include<stdio.h>
#include<math.h>

void main()
{
	int a, b, c;
	float d, R1, R2;
	printf("Enter the values of a, b ,c : ");
	scanf("%d %d %d", &a, &b, &c);
	d = (b * b)-(4 * a * c);
	if(d > 0)
	{
		R1 = ((-b)+ sqrt(d))/(2*a);
		R2 = ((-b)- sqrt(d))/(2*a);
		printf("Root 1 = %f and Root 2 = %f\n", R1, R2);
	}
	else if(d == 0)
	{
		R1 = (-b)/(2*a);
		printf("Both roots are equal with value %f\n", R1);
	}
	else
		printf("Roots are imaginary\n");
}

/*	OUTPUT
  
$ cc quadratic_equation.c -lm
$ ./a.out

Enter the values of a, b ,c : 1 2 3
Roots are imaginary

$ ./a.out
Enter the values of a, b ,c : 1 2 1
Both roots are equal with value -1.000000

$ ./a.out
Enter the values of a, b ,c : 4 5 6
Roots are imaginary

$ ./a.out
enter the values of a, b ,c : 6 3 2
Roots are imaginary

$ ./a.out
Enter the values of a, b ,c : 3 6 2
Root1 = -0.422650 and Root2 = -1.577350 

*/

