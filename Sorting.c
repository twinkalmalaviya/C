#include <stdio.h>
#define MAX 20
void sort_function(int size,int *ptr)
{
  int Temp_ptr;
  int i,j;
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
   if((ptr[i])>((ptr[j])))
   {
     Temp_ptr = (ptr[i]);
     (ptr[i]) = (ptr[j]);
     (ptr[j])=Temp_ptr;
     }
  }
  }
int main ()
{
  int array_int[MAX]={1,3,8,9,0,-8};
  int array_size,i=0;
  array_size=MAX;
  while(array_size>i)
  {
  printf("%d ",array_int[i]);
  i++;
  }
  sort_function(array_size,array_int);
  i=0;
  printf("\nafter sort\n");
    while(array_size>i)
  {
  printf("%d ",array_int[i]);
  i++;
  }

}
