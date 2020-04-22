/**

Task :
You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets 'a' with the sum of
them, and 'b' with the absolute difference of them.

a' = a + b
b' = |a - b|

Input Format :
The input will contain two integers, a and b, separated by a newline.

Output Format :
You have to print the updated value of a and b, on two different lines.

Sample Input
4
5

Sample Output
9
1

Explanation
a' = 4 + 5
b' = |4 - 5|

*/

#include <stdio.h>
#include <math.h>


void update(int *a , int *b)
{
	*a = *a + *b;
	*b = abs(*a - 2*(*b));
}

/*
void update(int *a , int *b)
{
	int t1 = *a + *b;
	*b = abs(*a - *b);
	*a = t1;
}
*/

int main()
{
	int a , b;
	int *pa = &a, *pb = &b;
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	return 0;
}

