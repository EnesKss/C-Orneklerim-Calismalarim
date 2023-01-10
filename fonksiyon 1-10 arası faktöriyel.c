#include <stdio.h>
#include <stdlib.h>

    int faktoriyel(int n)
    {
        int i;
        int sonuc=1;
        for(i=1;i<=n;i++)
        {
            sonuc=sonuc*i;
        }
        return sonuc;
    }




int main()
{
   /* 1 den 10 a kadar her bir sayının faktoriyelini fonksiyon kullanarak hesaplayan ve sonuçları ekrana
    listeleyen C programını yazınız*/
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d!=%d\n",i,faktoriyel(i));
    }
    return 0;
}
