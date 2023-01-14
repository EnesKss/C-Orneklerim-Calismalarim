#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	
	int kenar1,kenar2,kenar3,u,alan,A;
	
	printf("ucgenin kenarlarini giriniz: ");
	scanf("%d %d %d",&kenar1,&kenar2,&kenar3);
	
	u=(kenar1+kenar2+kenar3)/2;
	alan=(u*(u-kenar1)*(u-kenar2)*(u-kenar3));
	A=sqrt(alan);
	
	printf("%d",A);
	
	
	
	
	
	
	
	return 0;
}
