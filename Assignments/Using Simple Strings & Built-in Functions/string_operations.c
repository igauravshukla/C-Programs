/**

Q. Write a menu driven program to perform doloowing actions using user defined fucntions.
1. String Length
2. String copy
3. Convert to lower case
4. String concatenation
5. Exit

**/
 
#include<stdio.h>

int strlength(char str1[50])
{
	int i, len = 0;
	for(i=0 ; str1[i]!='\0' ; i++)
	{
		len++; 
	}
	return len;
}

void strlower(char str1[50] , char str2[50])
{
	int i;
	for(i=0 ; str1[i]!='\0' ; i++)
	{
		if('A'<=str1[i] && str1[i]<='Z')
			str2[i] = str1[i] + 32;
		else
			str2[i] = str1[i];
	}
	str2[i] = '\0';
}

void strcopy(char str1[50] , char str2[50])
{
	int i;
	for(i=0 ; str1[i]!='\0' ; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
}

void strconcatenate(char str1[50] , char str2[50] , char str3[50])
{
	int i , j;
	for(i=0 ; str1[i]!='\0' ; i++)
	{
		str3[i] = str1[i];
	}
	for(j=0 ; str2[j]!='\0' ; j++)
	{
		str3[i] = str2[j];
		i++;
	}
	str3[i] = '\0';
}

void main()
{
	char str1[50] , str2[50] , str3[50];
	int opt , n;
	char ch;
	do
	{
		printf("\n*****MENU*****\n");
		printf("1.String length\n");
		printf("2.String copy\n");
		printf("3.String convert to lower\n");
		printf("4.Concatenate\n");
		printf("5.Exit\n");
		printf("\nEnter the option : ");
		scanf("%d" , &opt);
		switch(opt)
		{
			case 1	:	printf("Enter first string : ");
						scanf("%c" , &ch); // to skip new line character
						gets(str1);
						n = strlength(str1);
						printf("Length of string = %d\n" , n);
						break;

			case 2	:	printf("Enter first string : ");
						scanf("%c" , &ch); // to skip new line character
						gets(str1);
						strcopy(str1 , str2);
						printf("Copied string = %s\n" , str2);
						break;

			case 3	:	printf("Enter first string : ");
						scanf("%c" , &ch); // to skip new line character
						gets(str1);
						strlower(str1 , str2);
						printf("String in lower case = %s\n" , str2);
						break;

			case 4	:	printf("Enter first string : ");
						scanf("%c" , &ch); // to skip new line character
						gets(str1);
						printf("Enter second string : ");
						gets(str2);
						strconcatenate(str1 , str2 , str3);
						printf("Concatenated string = %s\n" , str3);
						break;

			case 5	:	printf("Program terminated...");
						break;

			default	:	printf("Invalid Option Selected...\n");
		}
	}while(opt!=5);
}

/** OUTPUT


*****MENU*****
1.String length
2.String copy
3.String convert to lower
4.Concatenate
5.Exit

Enter the option : 1
Enter first string : gaurav shukla
Length of string = 13

*****MENU*****
1.String length
2.String copy
3.String convert to lower
4.Concatenate
5.Exit

Enter the option : 2
Enter first string : gaurav
Copied string = gaurav

*****MENU*****
1.String length
2.String copy
3.String convert to lower
4.Concatenate
5.Exit

Enter the option : 3
Enter first string : GAURAV
String in lower case = gaurav

*****MENU*****
1.String length
2.String copy
3.String convert to lower
4.Concatenate
5.Exit

Enter the option : 4
Enter first string : gaurav
Enter second string : shukla
Concatenated string = gaurav shukla

*****MENU*****
1.String length
2.String copy
3.String convert to lower
4.Concatenate
5.Exit

Enter the option : 6
Invalid Option Selected...

*****MENU*****
1.String length
2.String copy
3.String convert to lower
4.Concatenate
5.Exit

Enter the option : 5
Program terminated...

**/
