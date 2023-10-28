#include <stdio.h>

int main() {
    char ch;
    FILE *enes;
    enes = fopen("out.txt", "w");
    if (enes == NULL) {
        printf("Dosya acilamadi.");
        return 1;
    }
    while ((ch = getchar()) != '\n') {
        putc(ch, enes);
    }
    fclose(enes);
    return 0;
}

