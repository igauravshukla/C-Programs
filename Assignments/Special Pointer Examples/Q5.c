/*

Q. Define an int* pointer variable a. Then:
(1) create a dynamic array of 5 cells of type int.
(2) Write a loop to fill a with values 3, 7, 11, 15, 19.
(3) Use a function display to print the pointer address stored in a.
(4) Write a loop to print the values in a with one cell per line.
(5) Delete the dynamic memory allocated to a.

*/

#include<stdio.h>
#include<stdlib.h>

int i;
void display(int *a)
{
	printf("Pointer address = %p\n",a);
	for(i=0; i<5; i++)
		printf("%d\n",*(a+i));
}

void main()
{
	int *a = (int *) calloc(5 , sizeof (int));
	for(i=0; i<5; i++)
		scanf("%d",(a+i));
	display(a);
	free(a);
}

/*output

3 7 11 15 19
Pointer address = 005714A0
3
7
11
15
19

*/
