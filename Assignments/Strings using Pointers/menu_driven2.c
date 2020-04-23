/**

Q. Write a menu driven program to perform following operations using user defined functions and pointers.
1. String reverse
2. String concatenate
3. String compare
4. Modify the string by replacing one character with another.
5. Exit

**/
 
#include<stdio.h>

void strreverse(char *s , char *d)
{
	int len = 0;
	while(*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	for(len-- ; len>=0 ; len--)
	{
		*d = *s;
		s--;
		d++;
	}
	*d = '\0';
}

void stringcat(char *s1 , char *s2 , char *d)
{
	while(*s1 != '\0')
	{
		*d = *s1;
		d++;
		s1++;
	}
	while(*s2 != '\0')
	{
		*d = *s2;
		d++;
		s2++;
	}
	*d = '\0';
}

int stringcmp(char *s1 , char *s2)
{
	while(*s1 == *s2)
	{
		if(*s1 == '\0')
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void strmodify(char *s , char fc , char rc , char *d)
{
	while(*s != '\0')
	{
		if(*s == fc)
			*d = rc;
		else
			*d = *s;
		s++;
		d++;
	}
	*d = '\0';
}
 
void main()
{
	char str1[50] , str2[50] , str3[50];
	int opt , n;
	char fc , rc , ch;
	do
	{
		printf("\n*****MENU*****\n");
		printf("1. String reverse\n");
		printf("2. String concatenate\n");
		printf("3. String compare\n");
		printf("4. String modify\n");
		printf("5. Exit\n");
		printf("\nEnter your option : ");
		scanf("%d" , &opt);
		scanf("%c" , &ch); // to skip new line character
		switch(opt)
		{
			case 1	:	printf("Enter the string : ");
						gets(str1);
						strreverse(str1 , str2);
						printf("The reversed string = %s\n" , str2);
						break;

			case 2	:	printf("Enter first string : ");
						gets(str1);
						printf("Enter second string : ");
						gets(str2);
						stringcat(str1 , str2 , str3);
						printf("The concatenated string = %s\n" , str3);
						break;

			case 3	:	printf("Enter first string : ");
						gets(str1);
						printf("Enter second string : ");
						gets(str2);
						n = stringcmp(str1 , str2);
						if (n == 0)
							printf("Both strings are equal\n");
						else if (n > 0)
							printf("\'%s\' is greater than \'%s\'\n" , str1 , str2);
						else
							printf("\'%s\' is smaller than \'%s\'\n" , str1 , str2);
						break;

			case 4	:	printf("Enter string : ");
						gets(str1);
						printf("Enter character to be found : ");
						scanf("%c" , &fc);
						printf("Enter character to be replaced : ");
						scanf(" %c" , &rc);
						strmodify(str1 , fc , rc , str2);
						printf("Modified string = %s\n" , str2);
						break;

			case 5	:	printf("Program terminated...\n");
						break;

			default	:	printf("Invalid Option Selected...\n");
		}
	}while(opt != 5);
}

/**	OUTPUT

*****MENU*****
1. String reverse
2. String concatenate
3. String compare
4. String modify
5. Exit

Enter your option : 1
Enter the string : gaurav shukla
The reversed string = alkuhs varuag

*****MENU*****
1. String reverse
2. String concatenate
3. String compare
4. String modify
5. Exit

Enter your option : 2
Enter first string : gaurav shukla
Enter second string : bhai don patil
The concatenated string = gaurav shukla bhai don patil

*****MENU*****
1. String reverse
2. String concatenate
3. String compare
4. String modify
5. Exit

Enter your option : 3
Enter first string : gaurav
Enter second string : shraddha
'gaurav' is smaller than 'shraddha'

*****MENU*****
1. String reverse
2. String concatenate
3. String compare
4. String modify
5. Exit

Enter your option : 3
Enter first string : gaurav
Enter second string : bhai don
'gaurav' is greater than 'bhai don'

*****MENU*****
1. String reverse
2. String concatenate
3. String compare
4. String modify
5. Exit

Enter your option : 3
Enter first string : gaurav
Enter second string : gaurav
Both strings are equal

*****MENU*****
1. String reverse
2. String concatenate
3. String compare
4. String modify
5. Exit

Enter your option : 4
Enter string : gaurav shukla
Enter character to be found : a
Enter character to be replaced : A
Modified string = gAurAv shuklA

*****MENU*****
1. String reverse
2. String concatenate
3. String compare
4. String modify
5. Exit

Enter your option : 6
Invalid Option Selected...

*****MENU*****
1. String reverse
2. String concatenate
3. String compare
4. String modify
5. Exit

Enter your option : 5
Program terminated...

*/

