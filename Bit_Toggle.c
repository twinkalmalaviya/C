#include<stdio.h>
/*Macro to set,clear and toggle bit*/
#define SET_BIT(num,bit_p) (num|(1<<(bit_p-1)))
#define CLR_BIT(num,bit_p) (num&(~(1<<(bit_p-1))))
#define TOGGLE_BIT(num,bit_p) (num^((1<<(bit_p-1))))

int main()
{
int Data=100,bit_potion;
/* get input data from user */
printf("enter Bit postion which need to be set within 1 to 31\n");
scanf("%d",&bit_potion);
printf("Data before Set bit=%d\n",Data);
/*macro to set bit postion*/
printf("Data after Set bit=%d\n",SET_BIT(Data,bit_potion));
printf("Data after clear bit=%d\n",CLR_BIT(Data,bit_potion));
printf("Data after toggle bit=%d\n",TOGGLE_BIT(Data,bit_potion));
return 0;
}
