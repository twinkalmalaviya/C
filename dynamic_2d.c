#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int row=3,colum =4,elements =0,i,j;
  int **array_ptr;
  /* allocate row size of array pointer,where colum starting address can be store */
  array_ptr=(int**)malloc(row * sizeof(int*));
  for(i=0;i<row;i++)
  { 
    /*allocate colum size of array, where element value can be store*/
    array_ptr[i]=(int*)malloc(colum * sizeof(int));
  }
  /*added elements into 2d array */
  for(i=0;i<row;i++)
  for(j=0;j<colum;j++)
  {
    array_ptr[i][j]=elements++;
  }
  /*print 2d array */
    for(i=0;i<row;i++){
  for(j=0;j<colum;j++)
  {
   printf("%d ",array_ptr[i][j]);
  }
  printf("\n");
    }
}

