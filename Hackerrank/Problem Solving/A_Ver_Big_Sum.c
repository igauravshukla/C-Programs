/*

Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description :
Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s) :
    ar: an array of integers.

Input Format :
The first line of the input consists of an integer n.
The next line contains n space-separated integers contained in the array.

Output Format :
Print the integer sum of the elements in the array.

Constraints
    1 <= n <= 10
    0 <= ar[i] <= 10^10

Sample Input :
5
1000000001 1000000002 1000000003 1000000004 1000000005

Output :
5000000015

*/

#include<stdio.h>

int n;
long sum=0;
long aVeryBigSum(int a[])
{
    int i;
    for(i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

int main()
{
    int a[n],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%ld",aVeryBigSum(a));
}
