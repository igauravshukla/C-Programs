/**

You are given n triangles, specifically, their sides a[i], b[i] and c[i]. Print them in the same style but sorted by their
areas from the smallest one to the largest one. It is guaranteed that all the areas are different.
The best way to calculate a volume of the triangle with sides a, b and c is Heron's formula:
S = sqrt(p * (p-a) * (p-b) * (p-c)) where p = (a+b+c)/2.

Input Format :
First line of each test file contains a single integer n. n lines follow with a[i], b[i] and c[i] on each separated by single
spaces.

Constraints :
	1 <= n <= 100
	1 <= a[i],b[i],c[i] <= 70
	a[i] + b[i] > c[i], b[i] +c[i] > a[i], a[i] + c[i] > b[i]

Output Format :
Print exactly n lines. On each line print 3 integers separated by single spaces, which are a[i], b[i] and c[i] of the
corresponding triangle.

Sample Input 0
3
7 24 25
5 12 13
3 4 5

Sample Output 0
3 4 5
5 12 13
7 24 25

Explanation 0
The square of the first triangle is . The square of the second triangle is . The square of the third triangle is . So the
sorted order is the reverse one.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n)
{
	int i, j;
    triangle temp;
    float p0;
	int *p = malloc(n * sizeof(int));
	for(i=0 ; i<n ; i++)
	{
		p0 = (tr[i].a + tr[i].b + tr[i].c)/2.0;
		p[i] = (p0 *(p0 -tr[i].a) * (p0 - tr[i].b) * (p0 - tr[i].c));
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n-i-1 ; j++)
		{
			if (p[j] > p[j+1])
			{
				int temp1 = p[j];
				p[j] = p[j+1];
				p[j+1] = temp1;
				temp = tr[j];
				tr[j] = tr[j+1];
				tr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int n,i;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

