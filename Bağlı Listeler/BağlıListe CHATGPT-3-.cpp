#include <stdio.h>
#include <stdlib.h>

struct n {
    int x;
    struct n* next;
};

typedef struct n node;

int main() {
    node* head = (node*)malloc(sizeof(node));
    head->x = 0;
    head->next = NULL;
    
    node* iter = head;

    for (int i = 1; i < 5; i++) {
        iter->next = (node*)malloc(sizeof(node));
        iter = iter->next;
        iter->x = i * 20;
        iter->next = NULL;
    }
    
    iter = head;
    int i = 0;
    
    while (iter != NULL) {
        i++;
        printf("%d. eleman: %d\n", i, iter->x);
        iter = iter->next;
    }

    // Bellek temizleme
    iter = head;
    while (iter != NULL) {
        node* temp = iter;
        iter = iter->next;
        free(temp);
    }
    
    return 0;
}

