#include<stdio.h>
#include<stdlib.h>
#define pi 3
#define r 3

int main(){
	
	int islem;
	float cevre,alan;
	printf("yapýlcak islemi seciniz: ");
	scanf("%d",&islem);
	
	if (islem==1)
	{
		cevre=2*pi*r;
		printf("cevre: %f",cevre);
	}
	else if (islem==2)
	{
		alan=pi*r*r;
		printf("alan: %f",alan);	
	}
	else
	{
		printf("yanlýs islem girdiniz");
	}
	


	
	
	
	
	return 0;
}
