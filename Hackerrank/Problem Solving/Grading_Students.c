/*

HackerLand University has the following grading policy:
    Every student receives a grade in the inclusive range from 0 to 100.
    Any grade less than 40 is a failing grade.
    
Sam is a professor at the university and likes to round each student's grade according to these rules:
    If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
    If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
    
Function Description :
Complete the function gradingStudents in the editor below. It should return an integer array consisting of rounded grades.
gradingStudents has the following parameter(s):
    grades: an array of integers representing grades before rounding
    
Input Format :
The first line contains a single integer, n, the number of students.
Each line i of the n subsequent lines contains a single integer, grades[i], denoting student i's grade.

Constraints :
    1 <= n <= 60
    0 <= grades[i] <= 100
    
Output Format :
For each grades[i], print the rounded grade on a new line.
Sample Input 0
4
73
67
38
33
Sample Output 0
75
67
40
33

*/

#include <stdio.h>

int n;
void gradingStudents(int a[])
{
    for(int i=0;i<n;i++)
    {
        int x=a[i]+5-(a[i]%5);
        if(a[i]<38)
            printf("%d\n",a[i]);
        else if((x-a[i])<3)
            printf("%d\n",x);
        else
            printf("%d\n",a[i]);
    }
}

int main()
{
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    gradingStudents(a);
    return 0;
}
