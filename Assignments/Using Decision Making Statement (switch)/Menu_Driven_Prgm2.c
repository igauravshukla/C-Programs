/*

Q. Program to perform the following operations.

    OPTIONS        ACTIONS
    1            to check equality
    2            to check if x is less than y 
    3            divide x by y and display quotient and remainder
    4            swap

*/

#include<stdio.h>

void main()
{
	int x, y, option, t;
	printf("Enter 2 numbers : ");
	scanf("%d %d", &x, &y);
	printf("\nMAIN MENU\n");
	printf("1 : Equality check\n");
	printf("2 : Less-than comparison\n");
	printf("3 : To find quotient and remainder\n");
	printf("4 : Swap\n");
	printf("\nEnter the number from above options : ");
	scanf("%d", &option);
	switch(option)
	{ 
		case 1	:	if(x==y)
						printf("Given numbers are equal\n");
					else
						printf("Given numbers are not equal\n");
					break;

		case 2	:	if(x < y)
						printf("x(%d) is less than y(%d)\n", x, y);
					else
						printf("x(%d) is not less than y(%d)\n", x, y);
					break;

		case 3	:	printf("Quotient = %d\t", x / y);
					printf("Remainder = %d\n", x % y);
					break;

		case 4	:	printf("Before swapping x = %d and y = %d\n", x, y);
					x = x + y;
					y = x - y;
					x = x - y;
					printf("After swapping x = %d and y = %d\n", x, y);
					break;

		default	:	printf("Invalid Option Selected...\n");
					break;
	}
}

/*	OUTPUT

$ cc Menu_Driven_Prgm2.c
$ ./a.out
Enter 2 numbers : 2 3

MAIN MENU
1 : Equality check
2 : Less-than comparison
3 : To find quotient and remainder
4 : Swap

Enter the number from above options : 1
Given numbers are not equal

-------------------------------------------

$ ./a.out
Enter 2 numbers : 3 3

MAIN MENU
1 : Equality check
2 : Less-than comparison
3 : To find quotient and remainder
4 : Swap

Enter the number from above options : 1
Given numbers are equal

-------------------------------------------

$ ./a.out
Enter 2 numbers : 2 4

MAIN MENU
1 : Equality check
2 : Less-than comparison
3 : To find quotient and remainder
4 : Swap

Enter the number from above options : 2
x(2) is less than y(4)

-------------------------------------------

$ ./a.out
Enter 2 numbers : 4 2

MAIN MENU
1 : Equality check
2 : Less-than comparison
3 : To find quotient and remainder
4 : Swap

Enter the number from above options : 2
x(4) is not less than y(2)

-------------------------------------------

$ ./a.out
Enter 2 numbers : 4 5

MAIN MENU
1 : Equality check
2 : Less-than comparison
3 : To find quotient and remainder
4 : Swap

Enter the number from above options : 3
Quotient = 0	Remainder = 4

-------------------------------------------

$ ./a.out
Enter 2 numbers : 4 5

MAIN MENU
1 : Equality check
2 : Less-than comparison
3 : To find quotient and remainder
4 : Swap

Enter the number from above options : 4
Before swapping x = 4 and y = 5
After swapping x = 5 and y = 4

-------------------------------------------

$ ./a.out
Enter 2 numbers : 4 5

MAIN MENU
1 : Equality check
2 : Less-than comparison
3 : To find quotient and remainder
4 : Swap

Enter the number from above options : 4
Invalid Option Selected...

*/

