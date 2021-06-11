#include<stdio.h>
int main()
{
   int num1,num2,num3;

   printf("\n Enter value of n1, n2 and n3 \n");
    scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))

      printf("\n Number1 is greatest ");
   else if((num2>num3)&&(num2>num1))

      printf("\n Number2 is greatest ");
   else

      printf("\n Number3 is greatest ");

   return 0;
}
