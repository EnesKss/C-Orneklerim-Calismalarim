#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int sayi,i,toplam,a;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	toplam=0;
	
	for(i=0;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
				
		}
			
	}
   	if(sayi==toplam)
		{
			printf("m�kemmel sayidir");
		}
	else
		{
			printf("m�kemmel sayi degildir");
		}
			return 0;
			
}
