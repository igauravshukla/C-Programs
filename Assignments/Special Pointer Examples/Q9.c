/*

Q. Write a structure that has following variables :
	double taxrate = 7.3, discountrate, char buyer[20], seller[20];
1. Declare the variable tmpPtr to be a pointer to a variable of type double. 
2. Assign the address of variable taxrate to pointer variable tmpPtr. 
3. Print the value of the variable pointed to by tmpPtr to the display. 
4. Assign the value of the variable pointed to by tmpPtr to variable discountrate. 
5. Print the value of discountrate to the display. 
6. Print the address of taxrate to the display. 
7. Print the address stored in tmpPtr to the display. 
8. Copy the string stored in character array buyer into character array seller. 
9. Compare the string stored in character array buyer with the string in character
array seller, and print the result to the display. 
10. Determine the length of the string stored in character array buyer, and print the
result to the display.

*/

#include<stdio.h>
#include<string.h>

struct business
{
	double taxrate, discountrate;
	char buyer[20], seller[20];
};

void main()
{
	struct business b = {.taxrate = 7.3, .buyer = "Gaurav Shukla"};
	double *tmpPtr;
	tmpPtr = &b.taxrate;
	printf("Value of the variable pointed to by tempPtr = %.1f",*tmpPtr);
	b.discountrate = *tmpPtr;
	printf("\nValue of discounntrate = %.1f",b.discountrate);
	printf("\nAddress of taxrate = %p",&b.taxrate);
	printf("\nAddress stored in tmpPtr = %p",tmpPtr);
	strcpy(b.seller,b.buyer);
	if(strcmp(b.buyer,b.seller) == 0)
		printf("\nEqual");
	else
		printf("\nNot equal");
		printf("\nLength of string in buyer = %d",strlen(b.buyer));
}

/*output

Value of the variable pointed to by tempPtr = 7.3
Value of discounntrate = 7.3
Address of taxrate = 0028FEC0
Address stored in tmpPtr = 0028FEC0
Equal
Length of string in buyer = 13

*/
