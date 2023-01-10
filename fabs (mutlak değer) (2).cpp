#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	 double sayi,sonuc;
	printf("sayiyi girin: ");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("sonuc: %.lf",sonuc); 
	
	return 0;
}
