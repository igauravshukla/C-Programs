/*

Given an array, of size n, reverse it.

Example: If array, arr=[1,2,3,4,5], after reversing it, the array should be, arr=[5,4,3,2,1].

Input Format :
The first line contains an integer, n, denoting the size of the array. The next line contains n space-separated integers denoting the elements of the array.

Constraints :
    1 <= n <= 1000
    1 <= arr[i] <= 1000
    
Output Format :
The output is handled by the code given in the editor, which would print the array.

*/

#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}

