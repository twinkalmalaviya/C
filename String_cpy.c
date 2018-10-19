#include<stdio.h>
/*# define to choose method for string scan */
#define METHOD_THREE
#define MAX_SIZE 50 /* max string size */
/*function to copy String copy*/
void Str_Cpy(char * Source, char * Destination)
{
  int i =0; /* loop Control variable*/
  while(Source[i])
  {
    Destination[i]=Source[i]; /*copying char by char to destination address*/
    i++;
  }
}

int main()
{
/* arrays to store the string */
char string[MAX_SIZE]={0}; 
char string_2[MAX_SIZE]={0};
printf("%d\n",sizeof(string));
/*METHOD ONE to scan the string, it will scan untill whitespace*/
#ifdef METHOD_ONE
printf("enter string\n");
scanf("%s",string);
#endif
/*METHOD TWO to scan the string, using gets function*/
/*Note : gets() has been removed from c11. So it might give you a warning when implemented.*/
#ifdef METHOD_TWO
printf("enter string\n");
gets(string);
#endif
/*METHOD THREE to scan the string, Using %[^\n]%*c inside scanf*/
#ifdef METHOD_THREE
printf("enter string\n");
scanf("%[^\n]%*c",string);
#endif
Str_Cpy(string,string_2);
printf("%s\n",string);
printf("%s\n",string_2);
return 0;
}
