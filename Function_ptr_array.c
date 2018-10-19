#include<stdio.h>
/*function for SUM */
void Sum(int a, int b)
{
  printf("Inside Sum = %d\n",(a+b));
}
/*function for MUL */
void Mul(int a, int b)
{
  printf("Inside Mul = %d\n",(a*b));
}
/*function for SUB */
void Sub(int a, int b)
{
  printf("Inside Sub= %d\n",(a-b));
}

int main()
{
/* function pointer */
void (*function_ptr[3])(int,int)={Sum,Mul,Sub};
int operation,a=10,b=20;
/* get input data from user */
printf("enter operation number and two input\n");
scanf("%d%d%d",&operation,&a,&b);
/*function call as per INPut*/
(*function_ptr[operation])(a,b);
return 0;
}
