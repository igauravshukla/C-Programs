/*

Q. Create a structure student with name, roll_no, marks of 3 subjects. Write a program that creates a pointer, and stores
information of 5 students. Display all the students who secured more than 60% marks. Strictly use pointer notations.

*/

#include<stdio.h>
#include<stdlib.h>

struct student
{
	int roll_no, m1, m2, m3;
	char name[20];
	float per;
};

void display(struct student *ptr)
{
	int i;
	printf("\nStudents with more than 60% are as follows:\n");
	for(i=0; i<2; i++)
	{
		if(ptr->per > 60)
		{
			printf("\n%d\t",ptr->roll_no);
			printf("%s\t",ptr->name);
			printf("%f\n",ptr->per);
		}
		ptr++;
	}
}

void main()
{
	struct student s[5];
	struct student *a = NULL;
	int i;
	a = s;
	for(i=0; i<5; i++)
	{
		printf("\nEnter roll no. : ");
		scanf("%d" , &a->roll_no);
		printf("\nEnter name : ");
		scanf("%s" , a->name);
		printf("\nEnter marks of 3 subjects : ");
		scanf("%d %d %d" , &a->m1, &a->m2, &a->m3);
		a->per = (a->m1 + a->m2 + a->m3)/3;
		a++;	
	}
	display(s);
}

/*output


Enter roll no. : 1

Enter name : Gaurav

Enter marks of 3 subjects : 89 61 61

Enter roll no. : 2

Enter name : Shraddha

Enter marks of 3 subjects : 61 61 59

Enter roll no. : 3

Enter name : Bhai

Enter marks of 3 subjects : 61 54 78

Enter roll no. : 4

Enter name : 22kar

Enter marks of 3 subjects : 45 56 61

Enter roll no. : 5

Enter name : Aashu

Enter marks of 3 subjects : 34 23 65

Students with more than 60% are as follows:-

1       Gaurav  70.000000

3       Bhai    64.000000

*/
