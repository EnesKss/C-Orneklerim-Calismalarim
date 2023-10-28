#include <stdio.h>

int main() {
    FILE *dosya;
    char karakter;

    dosya = fopen("ornek.txt", "r"); // Dosyay� okuma modunda a�ma

    if (dosya == NULL) {
        printf("Dosya bulunamad�!");
        return 1;
    }

    while ((karakter = fgetc(dosya)) != EOF) {
        printf("%c", karakter); // Dosyadan karakter okuma ve ekrana yazd�rma
    }

    fclose(dosya); // Dosyay� kapatma

    return 0;
}

