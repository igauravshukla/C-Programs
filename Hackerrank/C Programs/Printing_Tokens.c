/**

Given a sentence, , print each word of the sentence in a new line.

Input Format :
The first and only line contains a sentence, s.

Constraints :
	1 <= len(s) <= 1000

Output Format :
Print each word of the sentence in a new line.

Sample Input 0
This is C 

Sample Output 0
This
is
C

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s;
	int i;
	s = malloc(1024 * sizeof(char));
	scanf("%[^\n]", s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i] == ' ')
			printf("\n");
		else
			printf("%c",s[i]);
	}
	return 0;
}

