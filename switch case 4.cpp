#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int sayi1,sayi2,sonuc,secim;
	sayi1=12;
	sayi2=16;
    printf("matematik menusu\n");
    printf("*******************\n\n");
    printf("1-Kare de alan ve cevre\n");
    printf("2-girilen sayinin kupu\n");
    printf("islemi secin:");
    scanf("%d",&secim);
    
    switch(secim)
    {
    	case 1:
    		printf("karenin alaný:%d\n",(sayi1*sayi1));
    		printf("karenin cevresi:%d",(sayi1*4));
    		break;
    		
    	case 2:
    		printf("sayinin kupu:%d",(sayi1*sayi1*sayi1));
    		break;
	}
    
    
	return 0;	
   
}
