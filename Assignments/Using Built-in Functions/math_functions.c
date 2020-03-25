/*

Q. Program to perform the following actions till the users selects exit accept approriate data for each option and use standard
library file.

*/
 
#include<stdio.h>
#include<math.h>

void main()
{
	int opt, x, y;
	do
	{
		printf("\n*** MAIN MENU *** \n");
		printf("1: Power\n");
		printf("2: Square root\n");
		printf("3: Log to base 10\n");
		printf("4: Exponent\n");
		printf("5: Exit\n");
		printf("\nEnter your option : ");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1	:	printf("Enter the value of x and y (for x^y operation) : ");
						scanf("%d %d", &x, &y);
						printf("%d raised to %d = %.2f\n", x, y, pow(x,y));
						break;

			case 2	:	printf("Enter the number : ");
						scanf("%d", &x);
						printf("Square root of %d = %.4f\n", x, sqrt(x));
						break;

			case 3	:	printf("Enter the number : ");
						scanf("%d", &x);
						printf("Log to the base 10 of %d = %.4f\n", x, log10(x));
						break;

			case 4	:	printf("Enter the number : ");
						scanf("%d", &x);
						printf("Exponent of %d = %.4f\n", x, exp(x));
						break;

			case 5	:	printf("Program Terminated...\n");
						break;

			default	:	printf("Invalid Option Selected...\n");
		}
	}while(opt!=5);
}

/** OUTPUT

$ cc math_functions.c -lm
$ ./a.out

*** MAIN MENU *** 
1: Power
2: Square root
3: Log to base 10
4: Exponent
5: Exit

Enter your option : 1
Enter the value of x and y (for x^y operation) : 2 3
2 raised to 3 = 8.00

*** MAIN MENU *** 
1: Power
2: Square root
3: Log to base 10
4: Exponent
5: Exit

Enter yor option : 2
Enter the number : 2
Square root of 2 = 1.4142

*** MAIN MENU *** 
1: Power
2: Square root
3: Log to base 10
4: Exponent
5: Exit

Enter yout option : 3
Enter the number : 2
Log to the base 10 of 2 = 0.3010

*** MAIN MENU *** 
1: Power
2: Square root
3: Log to base 10
4: Exponent
5: Exit

Enter your option : 4
Enter the number : 2
Exponent of 2 = 7.3891

*** MAIN MENU *** 
1: Power
2: Square root
3: Log to base 10
4: Exponent
5: Exit

Enter your option : 5
Inavlid Option Selected...

*** MAIN MENU *** 
1: Power
2: Square root
3: Log to base 10
4: Exponent
5: Exit

Enter your option : 5
Program Terminated...

**/

