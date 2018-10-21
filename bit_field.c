#include <stdio.h>

/*structer declartion which size should be 5 bit, it is not possible bcoz the minimun mamory you can delcared is 1 Byte/8-bit */
typedef struct{
 char pin_5_bit: 5;
 char pin_1_bit: 1;
 char pin_2_bit: 2;
}
Bit_5;

int main ()
{ 
  Bit_5 Temp_data;
  printf("%d",sizeof(Temp_data));
 
}
