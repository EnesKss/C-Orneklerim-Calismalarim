#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int para,yuzluk,ellilik,yirmilik,onluk;
	
	printf("para birimi giriniz: ");
	scanf("%d",&para);
	
	yuzluk=para/100;
	ellilik=(para%100)/50;
	yirmilik=((para%100)%50)/20;
	onluk=(((para%100)%50)%20)/10;
	
	printf("yuzluk: %d ellilik: %d yirmi: %d onluk: %d",yuzluk,ellilik,yirmilik,onluk);
	}


