#include <stdio.h>
#include <stdlib.h>
#define CAN 4

int main()
{
    int i;
    int max,min;
    int dizi[CAN];
    printf("Lutfen %d kadar deger giriniz\n",CAN);
    for(i=0;i<CAN;i++)
    {
        scanf("%d",&dizi[i]);
    }

    max=min=dizi[0];
    for(i=1;i<CAN;i++)
    {
        if(dizi[i]>max)
        {
            max=dizi[i];
        }
        if(dizi[i]<min)
        {
            min=dizi[i];
        }
    }

    printf("MAXIMUM DEGER : %d \n",max);
    printf("MINUMUM DEGER : %d \n",min);


    return 0;
}
