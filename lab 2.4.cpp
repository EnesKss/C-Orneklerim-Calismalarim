#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int A;
	float B,sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%f",&sayi);
	
	A=floor(sayi);
	B=sayi-A;
	
	printf("%d %.2f",A,B);
	
	
	
	
	
	return 0;
}
