/*

Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix arr is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = 1+5+9=15. The right to left diagonal = 3+5+9=17. Their absolute difference is |15-17|=2.

Function description

Complete the diagonalDifference function in the editor below. It must return an integer representing the absolute diagonal difference.

diagonalDifference takes the following parameter:
  arr: an array of integers .
  
Input Format

The first line contains a single integer, n, the number of rows and columns in the matrix arr.
Each of the next n lines describes a row, arr[i], and consists of n space-separated integers arr[i][j].

Constraints
  -100 <= arr[i][j] <= 100
  
Output Format

Print the absolute difference between the sums of the matrix's two diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12

Sample Output

15

I*/

#include<stdio.h>
#include<math.h>

int n,i,j,cnt;

int diagonalDifference(int arr[n][n])
{
    int sumlr=0,sumrl=0;
    for(i=0;i<n;i++)
        sumlr+=arr[i][i];
    for(i=n-1;i>=0;i--)
    {
        sumrl+=arr[i][cnt];
        cnt++;
    }
    return (sumlr-sumrl);
}

int main()
{
    int j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
          scanf("%d",&arr[i][j]);
    printf("%d",abs(diagonalDifference(arr)));
    return 0;
}
