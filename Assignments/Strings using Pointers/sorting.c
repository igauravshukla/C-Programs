/**

Q. Write a program to read n names and store them in an array and display them in sorted order.

**/
 
#include<stdio.h>
#include<string.h>

void main()
{
	char str[20][20] , temp[20] , ch;
	int n , i , k;
	printf("Number of names to read : ");
	scanf("%d" , &n);
	scanf("%c" , &ch); // to skip new line character for further reading of string
	for(i=0 ; i<n ; i++)
	{
		printf("Enter name : ");
		gets(str[i]);
	}
	for(i=0 ; i<(n-1) ; i++)
	{
		for(k=i+1 ; k<n ; k++)
		{
			if (stricmp(str[i] , str[k])>0)
			{
				strcpy(temp , str[i]);
				strcpy(str[i] , str[k]);
				strcpy(str[k] , temp);
			}
		}
	}
	printf("Sorted list of names is as below :\n");
	for(i=0 ; i<n ; i++)
	{
		puts(str[i]);
	}
}

/**	OUTPUT

Number of names to read : 3
Enter name : gaurav shukla
Enter name : tushar patil
Enter name : aashu daa
Sorted list of names is as below :
aashu daa
gaurav shukla
tushar patil

Number of names to read : 3
Enter name : Gaurav shukla
Enter name : aashu da
Enter name : Tushar patil
Sorted list of names is as below :
Gaurav shukla
Tushar patil
aashu da

// if stricmp() is used instead of strcmp()...then output will be...
Number of names to read : 3
Enter name : Gaurav shukla
Enter name : aashu daa
Enter name : Tushar patil
Sorted list of names is as below :
aashu daa
Gaurav shukla
Tushar patil

*/
