#include <stdio.h>

int main() {
    FILE *enes, *samet;
    int b = 5, f;
    float a = 13.72, c = 6.68, e, g;

   	enes = fopen("testdata", "w");
    fprintf(enes, "%f %d %f", a, b, c);
    fclose(enes);

    samet = fopen("testdata", "r");
    fscanf(samet, "%f %d %f", &e, &f, &g);
    fclose(samet);

    printf("%f %d %f\n", a, b, c);
    printf("%f %d %f\n", e, f, g);

    return 0;
}

