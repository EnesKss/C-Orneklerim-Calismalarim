#include<stdio.h>
#include<stdlib.h>
#define g 9.8
#define v 10

int main(){
	
	int m,h,Ep,Ek;
	printf("kutle giriniz: ");
	scanf("%d",&m);
	
	printf("yukseklik giriniz: ");
	scanf("%d",&h);
	
	Ep=m*g*h;
	
	Ek=(m*v*v)/2;
	
	printf("potansiyel enerji: %d ",Ep);
	printf("kinetik enerji: %d ",Ek);
	
	
	
	
	return 0;
}
