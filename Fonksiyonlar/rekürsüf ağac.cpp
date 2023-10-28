#include <stdio.h>

void draw_tree(int level) {
    if (level == 0) {
        printf("*");
    } else {
        draw_tree(level - 1);
        printf("\n");
        for (int i = 0; i < 2*level - 1; i++) {
            printf("*");
        }
        draw_tree(level - 1);
    }
}

int main() {
    draw_tree(3);
    return 0;
}
