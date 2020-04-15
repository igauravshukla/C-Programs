/*

Q. Introduce int variables x, y, z and int* pointer variables p, q, r. Set x, y, z to three distinct values. Set p, q, r to the
addresses of x, y, z respectively.
(1) Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
(2) Print the message: Swapping pointers.
(3) Execute the swap code: r = p; p = q; q = r;
(4) Print with labels the values of x, y, z, p, q, r, *p, *q, *r.

*/

#include<stdio.h>

int main()
{
	int x=2, y=3, z=4;
	int *p, *q, *r;
	p = &x;
	q = &y;
	r = &z;
	printf("Value of x = %d\n",x);
	printf("Value of y = %d\n",y);
	printf("Value of z = %d\n",z);
	printf("Value of p = %d\n",p);
	printf("Value of q = %d\n",q);
	printf("Value of r = %d\n",r);
	printf("Value of *p = %d\n",*p);
	printf("Value of *q = %d\n",*q);
	printf("Value of *r = %d\n",*r);
	printf("\nSwapping pointers...\n\n");
	r = p;
	p = q;
	q = r;
	printf("Value of x = %d\n",x);
	printf("Value of y = %d\n",y);
	printf("Value of z = %d\n",z);
	printf("Value of p = %d\n",p);
	printf("Value of q = %d\n",q);
	printf("Value of r = %d\n",r);
	printf("Value of *p = %d\n",*p);
	printf("Value of *q = %d\n",*q);
	printf("Value of *r = %d\n",*r);
	return 0;
}

/*output

Value of x = 2
Value of y = 3
Value of z = 4
Value of p = 2686720
Value of q = 2686716
Value of r = 2686712
Value of *p = 2
Value of *q = 3
Value of *r = 4

Swapping pointers...

Value of x = 2
Value of y = 3
Value of z = 4
Value of p = 2686716
Value of q = 2686720
Value of r = 2686720
Value of *p = 3
Value of *q = 2
Value of *r = 2

*/
