/*

You will be given two arrays of integers and asked to determine all integers that satisfy the following two conditions:
    The elements of the first array are all factors of the integer being considered
    The integer being considered is a factor of all elements of the second array

These numbers are referred to as being between the two arrays. You must determine how many such numbers exist.

For example, given the arrays a=[2,6] and b=[24,36], there are two numbers between them: 6 and 12. 6%2=0, 6%6=0, 24%6=0 and 36%6=0 for the first value. Similarly, for the second value.

Function Description :
Complete the getTotalX function in the editor below. It should return the number of integers that are betwen the sets.
getTotalX has the following parameter(s):
    a: an array of integers
    b: an array of integers

Input Format :
The first line contains two space-separated integers, n and m, the number of elements in arraya and the number of elements in array b.
The second line contains n distinct space-separated integers describing a[i] where 0 <= i < n.
The third line contains m distinct space-separated integers describing b[j] where 0 <= j < m.

Constraints :
    1 <= n,m <= 10
    1 <= a[i] <= 100
    1 <= b[j] <= 100
    
Output Format :
Print the number of integers that are considered to be between a and b.

Sample Input:
2 3
2 4
16 32 96

Sample Output:
3

Explanation:
2 and 4 divide evenly into 4, 8, 12 and 16.
4, 8 and 16 divide evenly into 16, 32, 96.
4, 8 and 16 are the only three numbers for which each element of a is a factor and each is a factor of all elements of b. 

*/

#include <stdio.h>

int n,m;

int getTotalX(int a[],int b[])
{
    int no=0;
    for(int i=a[n-1];i<=b[0];i++)
    {
        int j=0,k=0,flag=1;
        while(j<n)
        {
            if(i%a[j]!=0)
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag==1)
        {
            while(k<m)
            {
                if(b[k]%i!=0)
                {
                    flag=0;
                    break;
                }
                k++;
            }
            if(flag==1)
                no++;
        }   
    }
    return no;
}

int main()
{
    int i,j;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    int no = getTotalX(a,b);
    printf("%d",no);  
    return 0;
}
