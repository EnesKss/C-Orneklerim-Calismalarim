#include<stdio.h>
#include<stdlib.h>
 
 
 	int kupbul(int sayi)
 	{
 		int sonuc=sayi*sayi*sayi;
		 return sonuc;
		 				
	}
	
	int main(){
		
		int s;
		printf("sayiyi girin: ");
		scanf("%d",&s);
		printf("\n\n sonuc: %d",kupbul(s));
	}
