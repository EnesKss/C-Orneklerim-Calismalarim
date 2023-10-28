#include <stdio.h>

int main() {
    FILE *dosya;
    long konum;

    dosya = fopen("ornek.txt", "r");

    if (dosya == NULL) {
        printf("Dosya bulunamadý!");
        return 1;
    }

    // SEEK_SET: Dosyanýn baþýndan 5. karaktere konumlandýrma
    fseek(dosya, 5, SEEK_SET);
    konum = ftell(dosya);
    printf("Konum (SEEK_SET): %ld\n", konum);

    // SEEK_CUR: Mevcut konumdan 3 karakter ileri konumlandýrma
    fseek(dosya, 3, SEEK_CUR);
    konum = ftell(dosya);
    printf("Konum (SEEK_CUR): %ld\n", konum);

    // SEEK_END: Dosyanýn sonundan 7 karakter geriye konumlandýrma
    fseek(dosya, -7, SEEK_END);
    konum = ftell(dosya);
    printf("Konum (SEEK_END): %ld\n", konum);

    fclose(dosya);

    return 0;
}

