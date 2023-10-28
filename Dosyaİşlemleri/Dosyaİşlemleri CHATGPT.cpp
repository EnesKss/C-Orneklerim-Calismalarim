#include <stdio.h>

int main() {
    FILE *dosya;
    dosya = fopen("ornek.txt", "w"); // Dosya oluþturuluyor veya varsa üzerine yazýlýyor

    if (dosya == NULL) {
        printf("Dosya oluþturulamadý!");
        return 1;
    }

    fprintf(dosya, "Bu bir ornek dosya!"); // Dosyaya yazma iþlemi
    fclose(dosya); // Dosyayý kapatma

    return 0;
}

