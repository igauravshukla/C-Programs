/*

Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format :
The first line contains a string, num which is the given number.

Constraints :
	1 <= len(num) <= 1000
	All the elements of num are made of english alphabets and digits.

Output Format :
Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

Sample Input 0
a11472o5t6

Sample Output 0
0 2 1 0 1 1 1 1 0 0 

Explanation 0
In the given string:
1 occurs two times.
2, 4, 5, 6 and 7 occur one time each.
The remaining digits 0, 3, 8 and 9 don't occur at all.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int *a, i;
	char *s;
	s = malloc(1024 * sizeof(char));
	a = calloc (10 , sizeof(int));
	scanf("%[^\n]", s);
	for(i=0;i<strlen(s);i++)
		if('0' <= s[i] || s[i] <= '9')
			a[s[i] - '0'] += 1;
	for(i =0;i<10;i++)
		printf("%d ", a[i]);
	return 0;
}

