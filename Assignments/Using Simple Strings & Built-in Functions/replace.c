/**

Q. Write a program to accept a string and replace every occurrence  of blank space by #, tab key by $, digits by % sign and
reverse the case of alphabet. Do not use any function.

**/

#include<stdio.h>

void main()
{
	int i;
	char str[50];
	printf("Enter the string : ");
	gets(str);
	for(i=0 ; str[i]!='\0' ; i++)
	{
		if (str[i] == ' ')
			str[i] = '#';
		else if (str[i] == '\t')
			str[i] = '$';
		else if ('0' <= str[i] && str[i] <= '9')
			str[i] = '%';
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else
			str[i] = str[i] - 32;
	}
	printf("String after replacing every occurance = %s\n" , str);
}

/** OUTPUT

Enter the string : gaurav 123   is fine		NOW
String after replacing every occurance = GAURAV#%%%$IS#FINE$$now

**/

