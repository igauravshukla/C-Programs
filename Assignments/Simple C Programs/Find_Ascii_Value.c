/*

Q. Program to display ASCII value of a character.

*/

#include<stdio.h>

void main()
{
	char a;
	printf("Enter character : ");
	scanf("%c", &a);
	printf("Corresponding ASCII value = %d\n", a);
}

/*  OUTPUT

$ cc Find_Ascii_Value.c
$ ./a.out
Enter character : A
ASCII value = 65    

*/

