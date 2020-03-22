/*

Q. write a program to display n lines of following pattern.

 A  B  C  D 
 E  F  G 
 H  I 
 J 
 
*/

#include<stdio.h>

void main()
{
	int n, k, i;
	char ch;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	ch = 'A';
	for(i=1; i<=n; i++)
	{
		for(k=1; k<=(n-i+1); k++)
		{
			printf(" %c ", ch++);
		}
		printf("\n");
	}
}

/** OUTPUT

$ cc pattern1.c
$ ./a.out
Enter the value of n : 4
 A  B  C  D 
 E  F  G 
 H  I 
 J 

$ ./a.out
Enter the value of n : 10
 A  B  C  D  E  F  G  H  I  J
 K  L  M  N  O  P  Q  R  S
 T  U  V  W  X  Y  Z  [
 \  ]  ^  _  `  a  b
 c  d  e  f  g  h
 i  j  k  l  m
 n  o  p  q
 r  s  t
 u  v
 w

**/
