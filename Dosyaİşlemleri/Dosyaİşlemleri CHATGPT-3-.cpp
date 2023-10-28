#include <stdio.h>

int main() {
    FILE *dosya;
    dosya = fopen("ornek.txt", "a");

    if (dosya == NULL) {
        printf("Dosya bulunamadý!");
        return 1;
    }

    char metin[100];
    printf("Eklemek istediðiniz metni girin: ");
    scanf("%[^\n]%*c", metin);

    fprintf(dosya, "%s\n", metin);
    fclose(dosya);

    return 0;
}

