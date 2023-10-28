#include <stdio.h>

int main() {
    FILE *dosya;
    char karakter;

    dosya = fopen("ornek.txt", "r"); // Dosyayý okuma modunda açma

    if (dosya == NULL) {
        printf("Dosya bulunamadý!");
        return 1;
    }

    while ((karakter = fgetc(dosya)) != EOF) {
        printf("%c", karakter); // Dosyadan karakter okuma ve ekrana yazdýrma
    }

    fclose(dosya); // Dosyayý kapatma

    return 0;
}

