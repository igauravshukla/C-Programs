/*

Q. Create a structure that stores information about doctors on duty. The structure stores a information like  dr_id, ward_id,
dr_name, and shift_id. One shift requires 5 doctors. Once 5 drs allocated to shift new shift should be started automatically.
Write a program to implement these needs. Use pointer to structure.

*/

#include<stdio.h>
#include<stdlib.h>

struct doctors
{
	int dr_id, ward_id, shift_id;
	char dr_name[20];
};

void display(struct doctors *ptr, int n)
{
	int i;
	printf("\nDisplaying information:\n");
	printf("\nD.ID\tD.Name\tWard_ID\tShift_ID\n");
	for(i=0; i<n; i++)
	{
		printf("\n%d\t",ptr->dr_id);
		printf("%s\t",ptr->dr_name);
		printf("%d\t",ptr->ward_id);
		printf("%d",ptr->shift_id);
		ptr++;
	}
}

void main()
{
	struct doctors *ptr;
	int i,n;
	ptr = (struct doctors*) malloc(n * sizeof(struct doctors));
	printf("No. of doctors : ");
	scanf("%d",&n);
	int shift_id = 0;
	for(i=0; i<n; i++)
	{
		printf("\nEnter doctor id : ");
		scanf("%d",&(ptr+i)->dr_id);
		printf("\nEnter ward id : ");
		scanf("%d",&(ptr+i)->ward_id);
		printf("\nEnter doctor name : ");
		scanf("%s",(ptr+i)->dr_name);
		if(i%5 == 0)
			shift_id++;
		(ptr+i)->shift_id = shift_id;
	}
	display(ptr,n);
}

/*output

No. of doctors : 7

Enter doctor id : 1

Enter ward id : 101

Enter doctor name : Gaurav

Enter doctor id : 2

Enter ward id : 102

Enter doctor name : Shrad10

Enter doctor id : 3

Enter ward id : 103

Enter doctor name : Bhai

Enter doctor id : 4

Enter ward id : 104

Enter doctor name : 22Kar

Enter doctor id : 5

Enter ward id : 105

Enter doctor name : Aashu

Enter doctor id : 6

Enter ward id : 106

Enter doctor name : Ramya

Enter doctor id : 7

Enter ward id : 107

Enter doctor name : Smita

Displaying information:

D.ID    D.Name  Ward_ID Shift_ID

1       Gaurav  101     1
2       Shra10  102     1
3       Bhai    103     1
4       22Kar   104     1
5       Aashu   105     1
6       Ramya   106     2
7       Smita   107     2

*/
