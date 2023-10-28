#include<stdio.h>
#include<stdlib.h>

main() {
	
	printf("Ogrenci ortalama hesap bilgi sistemi\n\n");
	int s1,s2,ort;
	
	
	printf("sinav 1 degerini giriniz");
	scanf("%d",&s1);
	
	printf("sinav 2 degerini girin");
	scanf("%d",&s2);
	
	ort=(s1+s2)/2;
	
	printf("ortalama: %d \n\n",ort);
	
	if(ort>=50)
	{
		printf("tebrikler gectiniz :)");
	}
	else
	{
		printf("maalesef kaldiniz :(");
	}
	
	
	
	
	
	
	return 0;
}
