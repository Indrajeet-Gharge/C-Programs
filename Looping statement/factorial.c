//Wap to calculate the factorial of given number n.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fact=1;

    printf("Enter any number to know its factorial:\n");
    scanf("%d",&n);
    printf("\n");

    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d\n",n,fact);

    getch();
    return 0;
}
