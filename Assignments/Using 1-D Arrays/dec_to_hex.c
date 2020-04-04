/**

Q. Write a program to convert from decimal number to its equivalent hexadecimal number.

*/

#include<stdio.h>

void main()
{
	int i = 0, a[20], n;
	printf("Enter decimal number : ");
	scanf("%d", &n);
	while(n > 0)
	{
		a[i] = n % 16;
		i++;
		n = n / 16;
	}
	printf("Equivalent hexadecimal number : ");
	for(i--; i>=0; i--)
	{
		switch(a[i])
		{
			case 10	:	printf("A");
						break;

			case 11	:	printf("B");
						break;

			case 12	:	printf("C");
						break;
			case 13	:	printf("D");
						break;
			case 14	:	printf("E");
						break;
			case 15	:	printf("F");
						break;
			default	:	printf("%d",a[i]);
		}
	}
	printf("\n");
}

/**	OUTPUT

$ cc dec_to_hex.c
$ ./a.out
Enter decimal number : 245
Equivalent hexadecimal number : F5

$ ./a.out
Enter decimal number : 255
Equivalent hexadecimal number : FF

$ ./a.out
Enter decimal number : 200
Equivalent hexadecimal number : F0

**/

