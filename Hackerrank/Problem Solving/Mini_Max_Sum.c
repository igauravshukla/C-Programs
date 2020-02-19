/*

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

For example, arr = [1,3,5,7,9]. Our minimum sum is 1+3+5+7=16 and our maximum sum is 3+5+7+9=24. We would print

16 24

Function Description

Complete the miniMaxSum function in the editor below. It should print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 elements.

miniMaxSum has the following parameter(s):
    arr: an array of  integers
    
Input Format
    A single line of five space-separated integers.

Constraints
    1 <= arr[i] <= 10^9

Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)

Sample Input
1 2 3 4 5

Sample Output
10 14

*/

#include <stdio.h>
long arr[5];
void miniMaxSum(long arr[])
{
    long min=arr[0],max=arr[0],sum=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        else if(arr[i]<min)
            min=arr[i];
        sum+=arr[i];
    }
    printf("%ld %ld",(sum-max),(sum-min));
}
int main()
{
    for(int i=0;i<5;i++)
        scanf("%ld",&arr[i]);
    miniMaxSum(arr);
}
