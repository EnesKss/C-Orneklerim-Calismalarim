#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int i,sayi,n,j,a;
	float ort,toplam;
	int dizi[100];
	toplam=0;
	ort=0;
	printf("dinizin eleman sayisini giriniz: ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&dizi[i]);
	}
	for(j=0;j<n;j++)
	{
		toplam=toplam+dizi[j];
		ort=toplam/n;
	}
	for(i=0;i<n;i++)
	{
		if (dizi[i]>ort)
		{
			printf("%d\t",dizi[i]);
		}
	
	}
		
		
	
	
		printf("dizi elemanlari toplami: %d\n",toplam);
		printf("dizi elemanlari ortalamasi: %f",ort);
		
	
}
