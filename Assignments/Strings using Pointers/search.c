/**

Q. Write a Program to read n names and store them in an array. The program should read one name and check wheather it is present
or not.

**/
 
#include<stdio.h>
#include<string.h>

void main()
{
	char str[20][20] , name[20] , ch;
	int n , i;
	printf("Number of names to read : ");
	scanf("%d" , &n);
	scanf("%c" , &ch); // to skip new line character for further reading of string
	for(i=0 ; i<n ; i++)
	{
		printf("Enter name : ");
		gets(str[i]);
	}
	printf("Enter name to be searched : ");
	gets(name);
	for(i=0 ; i<n ; i++)
	{
		if (strcmp(str[i] , name) == 0)
			break;
	}
	if (i < n)
		printf("Name found in array\n");
	else
		printf("Name not found in array\n");
}

/**	OUTPUT

Number of names to read : 4
Enter name : gaurav shukla
Enter name : shraddha gaikar
Enter name : tushar patil
Enter name : 22kar
Enter name to be searched : gaurav shukla
Name found in array

Number of names to read : 4
Enter name : gaurav shukla
Enter name : shraddha gaikar
Enter name : tushar patil
Enter name : 22kar
Enter name to be searched : aashu da
Name not found in array

*/
