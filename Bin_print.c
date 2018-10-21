#include <stdio.h>
/*function to print binary value of given number*/
void print_bin(unsigned int Number)
{
  int i=31;
 // while(i>=0)
  for(i=31;i>=0;i--)
  {
  if((Number>>i) & 1)
  printf("1");
  else
  printf("0");

  }
}

int main ()
{
 int num;
 printf("Enter number\n");
 scanf("%d",&num);
 print_bin(0xf0f0f0f0);
 return 0;
}
