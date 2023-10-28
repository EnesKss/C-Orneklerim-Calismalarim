#include <stdio.h>
#include <stdlib.h>

struct n {
    int x;
    struct n* next;
};

typedef struct n node;

int main() {
    node* head;
    head = (node*)malloc(sizeof(node)); // Baþlangýç düðümünü oluþtur
    head->x = 10;
    head->next = NULL;
	int k;
    node* iter = head; // iter iþaretçisini baþlangýç düðümüne ayarla

    int i = 0;

    

    iter = head; // iter'i baþa döndür

    for (i = 0; i < 11; i++) {
        iter->next = (node*)malloc(sizeof(node));
        iter = iter->next;
        iter->x = i * 10;
        iter->next = NULL;
    }

    iter = head; // iter'i tekrar baþa döndür

    while (iter != NULL) {
        
		for(k=0;k<=11;k++)
        {
		
        printf("%d. eleman: %d\n", k, iter->x);
        iter = iter->next;
    }
    }

    return 0;
}

