/*

Q. Program to convert temperature from Fahrenheit to Celcius and Kelvin.

*/

#include<stdio.h>

void main()
{
	float c,f,k;
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f",&f);
	c = 5.0/9*(f-32);
	k = c + 273.15;
	printf("Temprature in Celcius = %f\n", c);
	printf("Temprature in Kelvin = %f\n", k);
}

/*  OUTPUT

$ cc Convert_Temp.c
$ ./a.out
Enter temperature in Fahrenheit : 120
Temprature in Celcius = 48.888889 
Temprature in Kelvin = 322.038879 

*/

