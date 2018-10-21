#include <stdio.h>
/* static variable access out side function */
int* print_fun(void)
{
  static int Temp_data =10;
  printf("%d\n",Temp_data);
  return (&Temp_data);
}


int main ()
{ 
/* change value of static Temp_data*/
  *(print_fun())=20;
    print_fun();

}
