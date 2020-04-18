/*

Q. Write a program that creates a structure pointer and access information about the lecturer. The structure contains fields
like name, qualification, department, subject he can teach, age etc. Find out all teachers who teach Java and C#.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct lecturer
{
	char name[20], qualification[10], department[15], subject[20];
};

void display(struct lecturer *ptr, int n)
{
	int i;
	printf("\nDisplaying Information:\n");
	for(i = 0; i < n; ++i)
	{
		if(stricmp((ptr+i)->subject,"Java") == 0 || strcmp((ptr+i)->subject,"C#") == 0)
			printf("Name : %s, Qualification : %s, Department : %s, Subject : %s\n",
					(ptr+i)->name, (ptr+i)->qualification, (ptr+i)->department, (ptr+i)->subject);
	}
}

void main()
{
	struct lecturer *ptr;
	int i, n;
	printf("Number of lecturers : ");
	scanf("%d", &n);
	ptr = (struct lecturer*) malloc(n * sizeof(struct lecturer));
	printf("Enter Name, Qualification, Department, Subject of Lecturer:\n");
	for(i = 0; i < n; ++i)
	{
		scanf("%s %s %s %s", (ptr+i)->name, (ptr+i)->qualification, (ptr+i)->department, (ptr+i)->subject);
	}
	display(ptr, n);
}

/*output

Number of lecturers : 4
Enter Name, Qualification, Department, Subject of Lecturer:
Gaurav M.Sc Comp.Sci. Java
Shraddha M.Sc Comp.Sci. JAVA
Ramya M.Sc Comp.Sci. Electronics
Bhai M.Sc Comp.Sci. C#

Displaying Information:

Name : Gaurav, Qualification : M.Sc, Department : Comp.Sci., Subject : Java
Name : Shraddha, Qualification : M.Sc, Department : Comp.Sci., Subject : JAVA
Name : Bhai, Qualification : M.Sc, Department : Comp.Sci., Subject : C#

*/
