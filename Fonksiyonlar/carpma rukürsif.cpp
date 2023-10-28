#include<stdio.h>

//carpma isareti kullanamdan carpma yapma

int carpim(int sayi1,int sayi2)
{
	int sonuc;
	if(sayi2==1)
	{
		sonuc=sayi1;
	}
	else
	{
		(sonuc=sayi1+carpim(sayi1,sayi2-1));
	}
	return sonuc;
}







int main(){
	
	int a,b;
	
	printf("2 adet sayi giriniz:\n ");
	scanf("%d %d",&a,&b);
	printf("%dx%d=%d",a,b,carpim(a,b));
}
