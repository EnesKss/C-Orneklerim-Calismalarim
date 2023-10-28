#include <stdio.h>

int main() {
    FILE *dosya;
    dosya = fopen("ornek.txt", "w"); // Dosya olu�turuluyor veya varsa �zerine yaz�l�yor

    if (dosya == NULL) {
        printf("Dosya olu�turulamad�!");
        return 1;
    }

    fprintf(dosya, "Bu bir ornek dosya!"); // Dosyaya yazma i�lemi
    fclose(dosya); // Dosyay� kapatma

    return 0;
}

