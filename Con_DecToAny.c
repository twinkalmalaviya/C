#include <stdio.h>
/*function to print binary value of given number*/
void print_Hex( int Number,int Conver_to)
{
  char Hex_value[33] = {0};
  int i = 31;
  Hex_value[32] = 0;
  while(Number)
  {
    Hex_value[i--] = "0123456789ABCDF"[Number%Conver_to];
    Number = Number/Conver_to;
  }
  printf("%s\n",&Hex_value[++i]);
}

int main ()
{

 print_Hex(100,16);
 return 0;
}

