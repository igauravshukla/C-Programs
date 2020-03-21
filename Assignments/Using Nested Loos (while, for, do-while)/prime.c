/*

Q. Write a program to display all prime numbers between 1 to 500.

*/

#include<stdio.h>

void main()
{
	int n, k, cnt;
	printf("All prime numbers between 1 to 500 are as below :\n");
	for(n=1; n<=500; n++)
	{
		cnt = 0;
		for(k=1; k<=n; k++)
		{
			if(n%k == 0)
				cnt++;
		}
		if(cnt == 2)
			printf("%d ", n);
	}
}

/**	OUTPUT

$ cc prime.c
$ ./a.out
All prime numbers between 1 to 500 are as below :
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167
173 179 181 191 193 197 199 211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 307 311 313 317 331 337 347 349 353
359 367 373 379 383 389 397 401 409 419 421 431 433 439 443 449 457 461 463 467 479 487 491 499

**/
