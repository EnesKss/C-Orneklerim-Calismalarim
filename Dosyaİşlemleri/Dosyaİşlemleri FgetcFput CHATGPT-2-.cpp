#include <stdio.h>

int main() {
    FILE *dosya1, *dosya2;
    char karakter;

    dosya1 = fopen("kaynak.txt", "r");
    dosya2 = fopen("hedef.txt", "w");

    if (dosya1 == NULL) {
        printf("Kaynak dosya bulunamadı!");
        return 1;
    }

    if (dosya2 == NULL) {
        printf("Hedef dosya oluşturulamadı!");
        return 1;
    }

    while ((karakter = fgetc(dosya1)) != EOF) {
        fputc(karakter, dosya2);
    }

    fclose(dosya1);
    fclose(dosya2);

    return 0;
}

