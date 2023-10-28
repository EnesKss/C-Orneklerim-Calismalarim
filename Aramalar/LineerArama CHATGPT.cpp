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

    int bulundu = 0; // Eþleþme bulunduðunda 1 olarak güncellenecek

    for (i = 0; i < boyut; i++) {
        if (dizi[i] == aranan) {
            bulundu = 1;
            break; // Eþleþme bulunduðunda döngüyü sonlandýr
        }
    }

    if (bulundu) {
        printf("Deger bulundu! Indeks: %d\n", i);
    } else {
        printf("Deger bulunamadi.\n");
    }

    return 0;
}

