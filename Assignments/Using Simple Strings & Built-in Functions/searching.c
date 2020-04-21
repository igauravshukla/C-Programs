/**

Q. Write a function which accepts two arguments, a string and a character. The function will return the position of character if
it is present, o.w. return -1. Use this function in main.

**/

#include<stdio.h>
 
int search(char str[20] , char ch)
{
	int i;
	for(i=0 ; str[i]!='\0' ; i++)
	{
		if(str[i] == ch)
			return i+1;
	}
	return -1;
}

void main()
{
	char str[20] , ch;
	int pos;
	printf("Enter string : ");
	gets(str);
	printf("Enter character to be searched : ");
	scanf("%c" , &ch);
	pos = search(str , ch);
	if(pos > 0)
		printf("Position of first occurence = %d\n" , pos);
	else
		printf("Character is not present in the given string\n");
}

/**	OUTPUT

Enter string : gaurav shukla
Enter character to be searched : s
Position of first occurence = 8

*/  
