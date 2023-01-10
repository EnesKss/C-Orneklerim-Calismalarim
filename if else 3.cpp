#include<stdio.h>
#include<stdlib.h>

main() {

    // klavyeden girilen sayý 5"e tam bölünüyorsa...
    
    int x;
    printf("sayiyi giriniz");
    scanf("%d",&x);
    
    if(x%5==0)
    {
    	printf("sayi 5'e tam bolunur");
	}
	else
	{
		printf("sayi 5'e tam bolunmez");
	}
	return 0;
}
