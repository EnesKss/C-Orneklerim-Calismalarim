#include <stdio.h>

int main() {
    int boyut, i, aranan;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &boyut);

    int dizi[boyut];

    printf("Dizi elemanlarini girin:\n");
    for (i = 0; i < boyut; i++) {
        scanf("%d", &dizi[i]);
    }

    printf("Aramak istediginiz degeri girin: ");
    scanf("%d", &aranan);

    int bulundu = 0; // E�le�me bulundu�unda 1 olarak g�ncellenecek

    for (i = 0; i < boyut; i++) {
        if (dizi[i] == aranan) {
            bulundu = 1;
            break; // E�le�me bulundu�unda d�ng�y� sonland�r
        }
    }

    if (bulundu) {
        printf("Deger bulundu! Indeks: %d\n", i);
    } else {
        printf("Deger bulunamadi.\n");
    }

    return 0;
}

