#include <stdio.h>
#include <stdint.h>
/*function to print binary value of given number*/
void Change_bit_value( uint32_t Number,uint32_t value,uint32_t start_bit,uint32_t end_bit)
{
  value = (value << start_bit)| ~(0xff << start_bit ); 
  printf("%x\n",value);

  Number = Number | (0xff <<start_bit);
  printf("%x\n", Number);

  Number = Number & value;
  printf("%x\n",Number);
}

int main ()
{

 Change_bit_value(0xAABBCCDD,0xAA,16,0);
 return 0;
}
