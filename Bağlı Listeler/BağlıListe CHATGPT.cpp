#include<stdio.h>
#include<stdlib.h>

struct enes {
	int x;
 enes *next;
};
/*
typedef struct enes kabe;

int main() {
	int type;
	kabe *head;
	head = (kabe*)malloc(sizeof(kabe));
	head->x = 10;
	head->next = (kabe*)malloc(sizeof(kabe));
	head->next->x = 20;
	head->next->next = (kabe*)malloc(sizeof(kabe));
	head->next->next->x = 30;
	
	kabe* iter;
	iter = head;
	printf("%d\n", iter->x);
	iter = iter->next;
	printf("%d\n", iter->x);
	iter = iter->next;
	printf("%d", iter->x);
	*/
	
	
	// TYPEDEF KULLANMADAN 


int main() {
	int type;
	struct enes *head;
	head = (struct enes *)malloc(sizeof(struct enes));
	head->x = 10;
	head->next = (struct enes *)malloc(sizeof(struct enes));
	head->next->x = 20;
	head->next->next = (struct enes *)malloc(sizeof(struct enes));
	head->next->next->x = 30;

	struct enes *iter;
	iter = head;
	printf("%d\n", iter->x);
	iter = iter->next;
	printf("%d\n", iter->x);
	iter = iter->next;
	printf("%d", iter->x);

	return 0;
}




