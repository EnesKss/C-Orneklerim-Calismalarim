#include<stdio.h>


//bölme isareti kullanmadan bolme islemi


int bolum(int bolunen,int bolen){
	
	if(bolen==0)
	{
		return 0;
	}
	else if (bolunen-bolen==0)
	{
		return 1;
	}
	else if(bolunen<bolen)
	{
		return 0;
	}
	else
	{
		return(1+bolum(bolunen-bolen,bolen));
	}
}






int main(){
	
	int a,b;
	
	printf("bolunen sayiyi giriniz: ");
	scanf("%d",&a);
	printf("bolen sayiyi giriniz");
	scanf("%d",&b);
	printf("bolum=%d\n",bolum(a,b));
	printf("kalan=%d",a-(bolum(a,b)*b));
}
