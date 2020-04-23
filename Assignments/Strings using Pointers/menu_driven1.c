/**

Q. Write a menu driven program to perform following operations using user defined functions and pointers.
1. String length
2. String copy
3. Convert to lower case
4. Convert to upper case
5. Exit

**/
 
#include<stdio.h>

int strlength(char *s)
{
	int len = 0;
	while(*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}

void strlower(char *s , char *t)
{
	while(*s != '\0')
	{
		if ('A' <= *s && *s <= 'Z')
			*t = *s + 32;
		else
			*t = *s;
		s++;
		t++;
	}
	*t = '\0';
}

void strupper(char *s, char *t)
{
	while(*s != '\0')
	{
		if ('a' <= *s && *s <= 'z')
			*t = *s - 32;
		else
			*t = *s;
		s++;
		t++;
	}
	*t = '\0';
}

void strcopy(char *s, char *t)
{
	while(*s != '\0')
	{  
		*t = *s;
		t++;
		s++;
	}
	*t = '\0';
}

void main()
{
	char str1[50] , str2[50] , str3[50];
	int opt , n;
	char ch;
	do
	{
		printf("\n*****MENU***** \n");
		printf("1. String length\n");
		printf("2. String copy \n");
		printf("3. Convert to Lower\n");
		printf("4. Convert to Upper\n");
		printf("5. Exit\n");
		printf("\nEnter your option : ");
		scanf("%d" , &opt);
		switch(opt)
		{
			case 1	:	printf("Enter string : ");
						scanf("%c" , &ch); // to skip new line character
						gets(str1);
						n = strlength(str1);
						printf("Length of string = %d\n" , n);
						break;

			case 2	:	printf("Enter string : ");
						scanf("%c" , &ch); // to skip new line character
						gets(str1);
						strcopy(str1 , str2);
						printf("Copied String = %s\n" , str2);
						break;

			case 3	:	printf("Enter string : ");
						scanf("%c" , &ch); // to skip new line character
						gets(str1);
						strlower(str1 , str2);
						printf("String in lower case = %s\n" , str2);
						break;

			case 4	:	printf("Enter string : ");
						scanf("%c" , &ch); // to skip new line character
						gets(str1);
						strupper(str1 , str2);
						printf("String in upper case = %s\n" , str2);
						break;

			case 5	:	printf("Program terminated...\n");
						break;

			default	:	printf("Invalid Option Selected...\n");
		}
	}while(opt!=5);
}

/** OUTPUT

*****MENU*****
1. String length
2. String copy
3. Convert to Lower
4. Convert to Upper
5. Exit

Enter your option : 1
Enter string : gaurav shukla
Length of string = 13

*****MENU*****
1. String length
2. String copy
3. Convert to Lower
4. Convert to Upper
5. Exit

Enter your option : 2
Enter string : gaurav shukla
Copied String = gaurav shukla

*****MENU*****
1. String length
2. String copy
3. Convert to Lower
4. Convert to Upper
5. Exit

Enter your option : 3
Enter string : GAURAV shukla
String in lower case = gaurav shukla

*****MENU*****
1. String length
2. String copy
3. Convert to Lower
4. Convert to Upper
5. Exit

Enter your option : 4
Enter string : gaurav Shukla
String in upper case = GAURAV SHUKLA

*****MENU*****
1. String length
2. String copy
3. Convert to Lower
4. Convert to Upper
5. Exit

Enter your option : 6
Invalid Option Selected...

*****MENU*****
1. String length
2. String copy
3. Convert to Lower
4. Convert to Upper
5. Exit

Enter your option : 5
Program terminated...

**/

