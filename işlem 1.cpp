#include<stdio.h>
#include<stdlib.h>

main(){
	
	int kenar,alan,cevre;
	
	printf("karede alan ve cevre hesabi\n\n");
	
	printf("bir kenari giriniz: ");
	scanf("%d",&kenar);
	
	alan=kenar*kenar;
	cevre=kenar*4;
	
	printf("karenin alani: %d\n",alan);
	printf("karenþn cevresi: %d",cevre);
	
	return 0;
}
