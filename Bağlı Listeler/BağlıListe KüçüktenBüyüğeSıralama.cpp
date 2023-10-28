#include <stdio.h>
#include <stdlib.h>

typedef struct n {
	int x;
	struct n* next;
} node;

void bastir(node* h) {
	while (h != NULL) {
		printf("%d\n", h->x);
		h = h->next;
	}
}

void ekle(node* r, int x) {
	while (r->next != NULL) {
		r = r->next;
	}
	r->next = (node*)malloc(sizeof(node));
	r->next->x = x;
	r->next->next = NULL;
}

node* ekleSirali(node* r, int x) {
	if (r == NULL) { // Eðer baðlý liste boþsa
		r = (node*)malloc(sizeof(node));
		r->next = NULL;
		r->x = x;
		return r;
	}

	if (r->x > x) { // Ýlk elemandan küçük durumu, head deðiþiyor
		node* temp = (node*)malloc(sizeof(node));
		temp->x = x;
		temp->next = r;
		r = temp;
		return temp;
	}

	node* iter = r;
	while (iter->next != NULL && iter->next->x < x) {
		iter = iter->next;
	}
	node* temp = (node*)malloc(sizeof(node));
	temp->next = iter->next;
	iter->next = temp;
	temp->x = x;
	return r;
}

int main() {
	node* head = NULL;
	int n, value;

	printf("Eleman sayisini girin: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Deger %d: ", i + 1);
		scanf("%d", &value);
		head = ekleSirali(head, value);
	}

	printf("Baðlý liste:\n");
	bastir(head);

	// Ýstediðiniz diðer iþlemleri burada yapabilirsiniz.

	return 0;
}

