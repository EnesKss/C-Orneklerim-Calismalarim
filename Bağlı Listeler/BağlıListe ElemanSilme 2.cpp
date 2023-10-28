#include<stdio.h>
#include<stdlib.h>

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
	printf("\n");
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
	if (r == NULL) { // Eğer bağlı liste boşsa
		r = (node*)malloc(sizeof(node));
		r->next = NULL;
		r->x = x;
		return r;
	}

	if (r->x > x) { // İlk elemandan küçük durumu, head değişiyor
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
node *sil(node*r,int x){
	
	node *temp;
	node *iter=r;
	
	if(r->x== x){
		temp=r;
		r=r->next;
		free(temp);
		return r;
	}
	
	while(iter ->next!= NULL && iter ->next->x != x ){
		iter=iter->next;	
	} 
	if (iter ->next == NULL){

			printf("sayi bulunamadi\n\n\n");
			return r;
}
temp = iter -> next;
iter->next=iter ->next->next;
free(temp);
return r;	
}
int main() {
	node* head = NULL;
	head = ekleSirali(head, 400);
	head = ekleSirali(head, 40);
	head = ekleSirali(head, 4);
	head = ekleSirali(head, 450);
	head = ekleSirali(head, 50);
	bastir(head);
	head=sil(head,50);
	bastir(head);
	head=sil(head,999);
	bastir(head);
	head=sil(head,4);
	bastir(head);
	head=sil(head,450);
	bastir(head);
	// İstediğiniz diğer işlemleri burada yapabilirsiniz.

	return 0;
}

