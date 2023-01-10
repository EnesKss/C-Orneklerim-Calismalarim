#include<stdio.h>
#include<stdlib.h>

main() {

    int sayi;
    
    printf("sayiyi giriniz:");
    scanf("%d",&sayi);
    
    if(sayi%3==0 && sayi%5==0)
    {
    	printf("sayi 3 ve 5 e tam bolunur");
	}
	else
	{
		printf("sayi 3 ve 5 e tam bolunmez");
	}
	return 0;
}
