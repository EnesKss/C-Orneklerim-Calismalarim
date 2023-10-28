#include <stdio.h>

int main() {
    FILE *dosya;
    char satir[100] = "enes merhaba";

    dosya = fopen("ornek.txt", "w");

    if (dosya == NULL) {
        printf("Dosya oluþturulamadý!");
        return 1;
    }

    fputs(satir, dosya);

    fclose(dosya);

    return 0;
}

