#include <stdio.h>
#include <stdlib.h>

struct n {
    int x;
    struct n* next;
};

typedef struct n node;

int main() {
    node* head;
    head = (node*)malloc(sizeof(node)); // Ba�lang�� d���m�n� olu�tur
    head->x = 10;
    head->next = NULL;
	int k;
    node* iter = head; // iter i�aret�isini ba�lang�� d���m�ne ayarla

    int i = 0;

    

    iter = head; // iter'i ba�a d�nd�r

    for (i = 0; i < 11; i++) {
        iter->next = (node*)malloc(sizeof(node));
        iter = iter->next;
        iter->x = i * 10;
        iter->next = NULL;
    }

    iter = head; // iter'i tekrar ba�a d�nd�r

    while (iter != NULL) {
        
		for(k=0;k<=11;k++)
        {
		
        printf("%d. eleman: %d\n", k, iter->x);
        iter = iter->next;
    }
    }

    return 0;
}

