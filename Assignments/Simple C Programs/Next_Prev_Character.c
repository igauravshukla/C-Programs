/*

Q. Program to display next and previous character.

*/

#include<stdio.h>

void main()
{
	char ch, prev, next;
	printf("Enter a character : ");
	scanf("%c", &ch);
	prev = ch - 1;
	next = ch + 1;
	printf("Previous character : %c\n", prev);
	printf("Next character : %c\n", next);
}

/*  OUTPUT

$ cc Next_Prev_Character.c
$ ./a.out
Enter a Character : n
Previous character : m 
Next character : o 

*/

