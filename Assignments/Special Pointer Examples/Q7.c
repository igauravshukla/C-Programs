/*

Q. Write a C program that will replace a substring of a given string by another string of length less than (or might be equal
to) the length of existing substring. Use pointers for this operation.

*/

#include<stdio.h>
#include<string.h>

void mod(char s[30],char t[20],char sub[20])
{
	int pos, i, j, cnt;
	char *found;
	char *ptr;
	char r = '\b';
	found = strstr(s,t);
	if(found)
	{
		pos = found - s;
		if(strlen(sub) <= strlen(t))
		{
			for(i = 0 ; i < strlen(t) ; i++)
			{
				if(sub[i])
				{
					ptr = sub[i];
					s[pos++] = ptr;
				}
				else
				{
					cnt = strlen(s) - pos;
					for(j=0;j<cnt;j++)
					{
						s[pos] = s[pos+1];
						pos++;
					}
				}
				*(ptr+1);
			}
			mod(s, t, sub);
		}
		else
			printf("TRY AGAIN... \n");
	}
	else
	{
		printf("Done..\n");
		printf("Modified string is : %s\n",s);
	}
}

int main()
{
	int pos;
	char s[30], t[20], sub[20];
	char *found;

	printf("Enter the first string : ");
	gets(s);

	printf("Enter the substring to be searched : ");
	gets(t);

	found = strstr(s , t);

	if(found)
	{
		printf("Enter string to replace : ");
		gets(sub);
		mod(s , t , sub);
	}
	else
		printf("Not found\n");
	return 0;
}

/**

Enter the first string : gaurav rav
Enter the substring to be searched : rav
Enter string to replace : var
Done..
Modified string is : gauvar var

Enter the first string : gaurav rav
Enter the substring to be searched : rav
Enter string to replace : va
Done..
Modified string is : gauva va

Enter the first string : gaurav
Enter the substring to be searched : var
Not found

Enter the first string : gaurav
Enter the substring to be searched : rav
Enter string to replace : varz
TRY AGAIN...

*/
