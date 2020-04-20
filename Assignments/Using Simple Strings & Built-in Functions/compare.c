/**

Q. Write a program to accept two strings str1 and str2. Compare them. If  str1 < str2, then concatenate str2 into str1.
If sstr1 > str2, then copy str1 to str2. If str1 = str2, then display legth of strings. Use standard or built-in functions.

**/

#include<stdio.h>
#include<string.h>

void main()
{
	int res;
	char str1[50] , str2[50] , str3[50];
	printf("Enter first string : ");
	gets(str1);
	printf("Enter second string : ");
	gets(str2);
	res = strcmp(str1 , str2);
	if (res < 0)
	{
		strcat(str1 , str2);
		printf("The concatenated string is : %s\n" , str1);
	}
	else if(res > 0)
	{
		strcpy(str2 , str1);
		printf("The copied string is : %s\n",str2);
	}
	else
		printf("Lenght of string = %d\n" , strlen(str1));
}

/** OUTPUT

Enter first string : gaurav
Enter second string : gaurav
Lenght of string = 6

Enter first string : gaurav 
Enter second string : shraddha
The concatenated string is : gaurav shraddha

Enter first string : shraddha
Enter second string : gaurav
The copied string is : shraddha
 
**/
