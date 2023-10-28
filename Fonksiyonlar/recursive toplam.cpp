#include<stdio.h>

// 1den girilen sayýya kadar olan sayýlarýn toplamý

int topla(int sayi)
{
	if(sayi==1)
	{
		return 1;
	}
	else
	{
		return sayi+topla(sayi-1);
	}
}



int main(){
	
	int sayi;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	printf("toplam sonucu=%d",topla(sayi));
	
	
}
