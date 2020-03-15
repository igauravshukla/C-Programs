/*

Q. Program to check whether it is digit, alphabet or special symbol.

*/

#include<stdio.h>

void main()
{
	char ch;
	printf("Enter the character : ");
	scanf("%c", &ch);
	if(ch >= '0' && ch <= '9')
		printf("Entered character \'%c\' is a digit\n",ch);
	else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		printf("Entered character \'%c\' is an alphabet\n",ch);
	else
		printf("Entered character \'%c\' is a special symbol\n",ch);  
}
   
/*	OUTPUT  

$ cc checking.c
$ ./a.out
Enter the character : a
Entered character 'a' is an alphabet

$ ./a.out
Enter the character : &
Entered character '&' is a special symbol

$ ./a.out
Enter the character : 4
Entered character '4' is a digit

*/

