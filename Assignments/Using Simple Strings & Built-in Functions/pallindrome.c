/**

Q. Write two functions i) string reverse to find reverse of given string ii) string compare to compare two strings. Use this
function in main to check wheather given string is pallindrome or not.

**/

#include<stdio.h>

int strcompare(char str1[50] , char str2[50])
{
	int i;
	for(i=0 ; str1[i]==str2[i] ; i++)
	{
		if (str1[i] == '\0')
			break;
	}
	return (str1[i]-str2[i]);
}

void strreverse(char str1[50] , char str2[50])
{
	int len , i;
	for(len=0 ; str1[len]!='\0' ; len++)
	{
	}
	len--;
	for(i=0 ; len>=0 ; len-- , i++)
	{
		str2[i] = str1[len];
	}
	str2[i] = '\0';
}

void main()
{
	char ch , str1[50] , str2[50];
	printf("Enter the string : ");
	scanf("%s" , str1);
	strreverse(str1 , str2);
	if (strcompare(str1 , str2) == 0)
		printf("String is pallindrome...\n");
	else
		printf("String is not pallindrome...\n");
}

/**	OUTPUT

Enter the string : gaurav
String is not pallindrome...

Enter the string : nayan
String is pallindrome...

*/

