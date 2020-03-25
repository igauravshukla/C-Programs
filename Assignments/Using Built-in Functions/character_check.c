/*

Q. Program which accept character from the user and checks if it is alphabet, digit or punctuation symbol. If it is an alphabet,
then display the changed case later.

*/

#include<stdio.h>

void main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c", &ch);
	if(isalpha(ch))
	{
		if(islower(ch))
			printf("Changed case of character : %c\n", toupper(ch));
		else
			printf("Changed case of character : %c\n", tolower(ch));
	}
	else if(isdigit(ch))
		printf("Entered character is a digit\n");
	else if(ispunct(ch))
		printf("Entered character is a punctuation symbol\n");
}

/**  OUTPUT
 
$ cc character_check.c
$ ./a.out
Enter a character : a
Changed case : A

$ ./a.out
Enter a character : A
Changed case : a

$ ./a.out
Enter a character : %
Entered character is a punctuation symbol

$ ./a.out
Enter a character : 6
Entered character is a digit

**/

