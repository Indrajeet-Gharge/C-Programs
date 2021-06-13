
#include<stdio.h>
int main()
{

    int n ,count , sum = 0;

    printf("\n Enter the value of n(positive integer):");
    scanf("%d",&n);

    for(count=1; count<=n; count++)
    {
        sum = sum + n;
    }
    printf(" \n Sum of first %d natural number is: %d", n , sum);

    return 0;
}

