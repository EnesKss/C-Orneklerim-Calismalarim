#include <stdio.h>
#include <stdlib.h>

void sayiiste()
{
    int sayi;
    while(1)
    {
        printf("Lutfen bir sayi giriniz\n");
        scanf("%d",&sayi);
        if(sayi<0)
        {
            break;
        }

    }

}




int main()
{
   /*Klavyeden negatif bir değer girilinceye kadar kullanıcıdan sürekli sayı isteyen C programını fonksiyon
   kullanarak yazınız*/
   sayiiste();

    return 0;
}
