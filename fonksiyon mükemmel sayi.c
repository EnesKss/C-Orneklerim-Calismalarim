#include <stdio.h>
#include <stdlib.h>

    int mukemmel(int n)
    {
        int i=1;
        int toplam=0;

        while(i<n)
        {
            if(n%i==0)
            {
                toplam=toplam+i;
            }
            i++;

        }
        if(toplam==n)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }





int main()
{
   /* Kendisi hariç pozitif tam bölenlerinin toplamı kendisine eşit olan sayılara mükemmel sayı adı veilmektedir.
    Buna göre klavyeden girilen bir sayının mükemmel olup olmadığını fonksiyon kullanarak
    bulan C programını yazınız*/
    int sayi;
    int sonuc;
    printf("Ltfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    sonuc=mukemmel(sayi);
    if(sonuc==1)
    {
        printf("Sayi gercekten mukemmel");

    }
    else
    {
        printf("Sayi mukemmel degil");
    }


    return 0;
}
