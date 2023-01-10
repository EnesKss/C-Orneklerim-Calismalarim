#include<stdio.h>
#include<stdlib.h>


int main(){
	
   int sayi1,sayi2,sonuc,secim;
	printf("Matematik Menusu\n");
     printf("****************\n\n");
     printf("1-Karede alan ve cevre hesabi\n");
     printf("2-Girilen sayinin kupu\n");
     printf("3-Cemberde alan ve cevre hesabi\n");
     printf("4-5x^2+7x+9 x e gore islemi\n");
     printf("5-Dikdortgende alan ve cevre hesabi\n");
     printf("***************\n");
     printf("****Temel alinacak sayilari giriniz****\n");
     printf("1. Sayi:");
     scanf("%d",&sayi1);
     printf("2. Sayi:");
     scanf("%d",&sayi2);
     printf("Isleminizi seciniz:");
     scanf("%d",&secim);
     switch(secim)
	{
		case 1:
			printf("Karenin alani: %d \n",(sayi1*sayi1));
			printf("Karenin cevresi: %d",(sayi1*4));
			break;
	    case 2:
	    	printf("Sayinin kupu: %d",(sayi1*sayi1*sayi1));
	    	break;
	    case 3:
	    	printf("Cemberde alaný: %f \n",(3.14*(sayi1*sayi1)));
	    	printf("Cemberde cevresi: %f",(2*sayi1*3.14));
	    	break;
	    case 4:
	    	printf("5x^2+7x+9 isleminde x degerine gore sonuc: %d",(5*(sayi1*sayi1)+7*(sayi1)+9));
	    	break;
	    case 5:
	    	printf("Dikdortgende alan: %d\n",(sayi1*sayi2));
	    	printf("Dikdortgende cevre: %d",2*(sayi1+sayi2));
	    	break;
	}
	
	return 0;	
   
}
