#include <stdio.h>
#include <stdlib.h>
#define VERGI_kitap 4.0
#define VERGI_temelgida 5.6
#define VERGI_luks 19.6
#define KITAP 0
#define TEMELGIDA 1
#define LUKS 2

int main()
{
    int i;
    float fiyat;

    printf("Lutfen urunun fiyatini ve kodunu giriniz\n");
    scanf("%f %d",&fiyat,&i);
	
    printf("Urunumuzun satis fiyati: ");

    if(i==0)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_kitap/100);
    }
    else if(i==1)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_temelgida/100);
    }
    else if(i==2)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_luks/100);
    }
    else
    {
        printf("Boyle bir urun yoktur.Lutfen adam gibi kod girin.");
    }

    return 0;
}
