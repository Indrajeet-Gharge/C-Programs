

#include<stdio.h>
int main()
{
    char str[50],i;
    printf(" Enter a String: \n");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; ++i)
     printf("\nLength of input string: %d",i);

    return 0;
}
