#include <stdio.h>
#include <stdlib.h>

typedef struct n {
	int x;
	struct n *next;
} node;

void bastir(node *h) {
	while (h != NULL) {
		printf("%d\n", h->x);
		h = h->next;
	}
}

void ekle(node *r,int x){
	
	while(r->next!=NULL){
	r=r->next;
	}
	r->next=(node*)malloc(sizeof(node));
	r->next->x=x;
	r->next->next=NULL;

}


	

int main() {
	node *head;
	head=(node*)malloc(sizeof(node));
	head ->next=NULL;
	head -> x=500;
	int i=0;
		for (i = 0; i < 5; i++) {
			ekle(head,i*10);
	}
	bastir(head);
	node *iter=head;
	for(i=0;i<3;i++)
	{
		iter=iter->next;
		
	}
	node*temp=(node*)malloc(sizeof(node));
	temp->next=iter->next;
	iter->next=temp;
	temp->x=100;
	
	bastir(head);
	return 0;
}

