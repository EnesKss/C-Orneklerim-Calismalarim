#include<stdio.h>

// klavyeden girilen say�alr� carpma i�areti kullanmadan carp�n�z

int carpim(int a,int b)   // a=3 b=5
{
	int sonuc;
	if(b==1)
	{
		sonuc=a;
	}
	else
	{
		sonuc=a+carpim(a,b-1);
	}
	return sonuc;
}




int main(){
	int a,b;
	printf("2 sayi giriniz:\n ");
	scanf("%d %d",&a,&b);	
	printf("%d carpi %d=%d",a,b,carpim(a,b));
	
	
}

