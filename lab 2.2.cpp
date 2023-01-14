#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int p,k,h,b,c;
	printf("p ve k degerlerini giriniz: ");
	scanf("%d %d",&p,&k);
	
	h=(p*k)*1/2;
	b=((p+k)*k)*1/2;
	c=((p+k)*p)*1/2;
	
	printf("%d %d %d",h,b,c);
}
