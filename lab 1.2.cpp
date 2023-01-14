#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int ogrno,vize,final,gecernot; 
	
	printf("ogrenci no giriniz: ");
	scanf("%d",&ogrno);
	
	printf("vize ve final notu giriniz:");
	scanf("%d %d",&vize,&final);
	
	gecernot=(vize*40)/100+(final*60)/100;
	
	printf("ogrenci no: %d \n",ogrno);
	
	printf("donem sonu notu: %d",gecernot);
}
