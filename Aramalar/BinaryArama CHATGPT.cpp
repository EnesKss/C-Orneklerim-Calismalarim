#include <stdio.h>

int main() {
    int boyut, i, aranan;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &boyut);

    int dizi[boyut];

    printf("Dizi elemanlarini girin (sirali olarak):\n");
    for (i = 0; i < boyut; i++) {
        scanf("%d", &dizi[i]);
    }

    printf("Aramak istediginiz degeri girin: ");                  //1 4 6 7 9 11 17
    scanf("%d", &aranan);

    int baslangic = 0;
    int bitis = boyut - 1;
    int bulundu = 0; // E�le�me bulundu�unda 1 olarak g�ncellenecek
    int orta;

    while (baslangic <= bitis) {
        orta = (baslangic + bitis) / 2;

        if (dizi[orta] == aranan) {
            bulundu = 1;
            break; // E�le�me bulundu�unda d�ng�y� sonland�r
        } else if (dizi[orta] < aranan) {
            baslangic = orta + 1; // Aranan ��e sa� yar�da oldu�unda arama yap
        } else {
            bitis = orta - 1; // Aranan ��e sol yar�da oldu�unda arama yap
        }
    }

    if (bulundu) {
        printf("Deger bulundu! Indeks: %d\n", orta);
    } else {
        printf("Deger bulunamadi.\n");
    }

    return 0;
}

