/*

Q. Write a function which accepts a character and an integers as parameter and displays the next 'n' characters.

*/

#include<stdio.h>

void display(char ch,int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		ch++;
		printf("%c ", ch);
	}
}

void main()
{
	char ch;
	int n;
	printf("Enter a character : ");
	scanf("%c", &ch);
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("Next %d characters from \'%c\' are : ", n, ch);
	display(ch , n);
}

/** OUTPUT

$ cc characters_display.c
$ ./a.out
Enter a character : a
Enter the number : 5
Next 5 characters from 'a' are : b c d e f 

**/

