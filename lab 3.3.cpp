#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayi,t1,t2,t3,i,a;
	t1=0;
	t2=0;
	t3=0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for (i=0;i<=sayi;i++)
	{
		t1=t1+i;
	}
	
	for (i=0;i<=sayi;i++)
	{
		if(i%2==0)
		{
			t2=t2+i;
		}
		else
		{
			t3=t3+i;
		}
		
	}
	printf("1den %d ye kadar olanlarýn toplamý:%d\n ",sayi,t1);
	printf("1den %dye kadar cift olan sayilarin toplami: %d\n",sayi,t2);
	printf("1den %dye kadar olan tek sayilarin toplami:%d ",sayi,t3);
	
	return 0;
}
